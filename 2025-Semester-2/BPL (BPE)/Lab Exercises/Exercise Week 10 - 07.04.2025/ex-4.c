//
// Created by Kristiyan Petsanov on 7.04.25.
//

#include <stdio.h>

typedef struct Book {
  char title[255];
  char author[255];
  int year_published;
  float price;
} Book;

void print_book(Book book) {
  printf("Title: %s\n", book.title);
  printf("Author: %s\n", book.author);
  printf("Year Published: %d\n", book.year_published);
  printf("Price: %.2f\n", book.price);
}

void cheapest_book(Book books[], int n) {
  float min_price = books[0].price;
  int min_index = 0;

  for (int i = 1; i < n; i++) {
    if (books[i].price < min_price) {
      min_price = books[i].price;
      min_index = i;
    }
  }

  printf("Cheapest book:\n");
  print_book(books[min_index]);
}

void most_expensive_book(Book books[], int n) {
  float max_price = books[0].price;
  int max_index = 0;

  for (int i = 1; i < n; i++) {
    if (books[i].price > max_price) {
      max_price = books[i].price;
      max_index = i;
    }
  }

  printf("Most expensive book:\n");
  print_book(books[max_index]);
}

float average_book_price(Book books[], int n) {
  float total_price = 0;

  for (int i = 0; i < n; i++) {
    total_price += books[i].price;
  }

  return total_price / n;
}

int main() {
  int n;
  printf("Enter the number of books: ");
  scanf("%d", &n);

  Book books[n];

  for (int i = 0; i < n; i++) {
    printf("Enter details for book %d:\n", i + 1);
    printf("Title: ");
    scanf(" %[^\n]", books[i].title);
    printf("Author: ");
    scanf(" %[^\n]", books[i].author);
    printf("Year Published: ");
    scanf("%d", &books[i].year_published);
    printf("Price: ");
    scanf("%f", &books[i].price);
  }

  cheapest_book(books, n);
  most_expensive_book(books, n);
  printf("Average book price: %.2f\n", average_book_price(books, n));

  return 0;
}