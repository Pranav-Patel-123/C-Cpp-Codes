#include <stdio.h>
#include <stdlib.h>

struct Cell {
  char content;
  struct Cell *next;
  struct Cell *prev;
};

struct TuringMachine {
  struct Cell *tape;
  struct Cell *currentCell;
};

void initTuringMachine(struct TuringMachine *machine) {
  machine->tape = malloc(sizeof(struct Cell));
  machine->currentCell = machine->tape;
  machine->tape->content = ' ';
  machine->tape->next = NULL;
  machine->tape->prev = NULL;
}

void addCell(struct TuringMachine *machine, char content) {
  struct Cell *newCell = malloc(sizeof(struct Cell));
  newCell->content = content;
  newCell->next = machine->tape;
  newCell->prev = NULL;
  machine->tape->prev = newCell;
  machine->tape = newCell;
}

void moveLeft(struct TuringMachine *machine) {
  if (machine->currentCell->prev != NULL) {
    machine->currentCell = machine->currentCell->prev;
  }
}

void moveRight(struct TuringMachine *machine) {
  if (machine->currentCell->next != NULL) {
    machine->currentCell = machine->currentCell->next;
  }
}

void writeCell(struct TuringMachine *machine, char content) {
  machine->currentCell->content = content;
}

char readCell(struct TuringMachine *machine) {
  return machine->currentCell->content;
}

int main() {
  struct TuringMachine machine;
  initTuringMachine(&machine);

  addCell(&machine, 'A');
  addCell(&machine, 'B');
  addCell(&machine, 'C');

  machine.currentCell = machine.tape;

  while (1) {
    char currentChar = readCell(&machine);

    if (currentChar == 'A') {
      writeCell(&machine, 'B');
      moveRight(&machine);
    } else if (currentChar == 'B') {
      writeCell(&machine, 'C');
      moveRight(&machine);
    } else if (currentChar == 'C') {
      break;
    }
  }

  printf("The final state of the tape is: %s\n", readCell(&machine));

  return 0;
}
