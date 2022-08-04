#include <stdio.h>
#include <conio.h>

#define WIDTH 10
#define HEIGHT 20

int data[HEIGHT][WIDTH];

void init();
void display();

int main() {
  init();
  //for (;;) {
    system("cls");                    //画面初期化, Linuxなら「system("clear");」とする
    display();
  //}
  for (;;) {}
}

void init() {
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      data[i][j] = 0;
    }
  }
}

void display() {
  for (int i = 0; i < HEIGHT + 2; i++) {
    for (int j = 0; j < WIDTH + 2; j++) {
      if (i == 0 || i == HEIGHT + 1 || j == 0 || j == WIDTH + 1) {
        printf("■");
        if (j == WIDTH + 1) {
          printf("\n");
        }
      }
      else {
        printf(" ");
      }
    }
  }
}