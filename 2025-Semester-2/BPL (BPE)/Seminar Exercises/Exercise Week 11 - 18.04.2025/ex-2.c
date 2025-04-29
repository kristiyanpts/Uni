#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product {
  int id;
  char name[100];
  float price;
} Product;

typedef struct Order {
  int product_id;
  char client_address[100];
} Order;

void addProduct(Product** products, int* productCount, int* productCapacity, int id, char* name, float price) {
  if (*productCount >= *productCapacity) {
    *productCapacity = (*productCapacity == 0) ? 1 : (*productCapacity + 1);
    Product* temp = (Product*)realloc(*products, (*productCapacity) * sizeof(Product));

    if (temp == NULL) {
      printf("Memory allocation failed\n");
      return;
    }

    *products = temp;
  }

  (*products)[*productCount].id = id;
  strcpy((*products)[*productCount].name, name);
  (*products)[*productCount].price = price;
  (*productCount)++;
}

void addOrder(Order** orders, int* orderCount, int* orderCapacity, int product_id, char* address) {
  if (*orderCount >= *orderCapacity) {
    *orderCapacity = (*orderCapacity == 0) ? 1 : (*orderCapacity + 1);
    Order* temp = (Order*)realloc(*orders, (*orderCapacity) * sizeof(Order));

    if (temp == NULL) {
      printf("Memory allocation failed\n");
      return;
    }
    *orders = temp;
  }

  (*orders)[*orderCount].product_id = product_id;
  strcpy((*orders)[*orderCount].client_address, address);
  (*orderCount)++;
}

Product* findProduct(Product* products, int productCount, int product_id) {
  for (int i = 0; i < productCount; i++) {
    if (products[i].id == product_id) {
      return &products[i];
    }
  }

  return NULL;
}

void removeOrder(Order** orders, int* orderCount, int index) {
  if (index < 0 || index >= *orderCount) return;

  for (int i = index; i < (*orderCount) - 1; i++) {
    (*orders)[i] = (*orders)[i + 1];
  }

  (*orderCount)--;
}

int main() {
  Product* products = NULL;
  Order* pendingOrders = NULL;
  int productCount = 0, productCapacity = 0;
  int orderCount = 0, orderCapacity = 0;

  char command[10];

  while (1) {
    scanf("%s", command);

    if (strcmp(command, "END") == 0) {
      break;
    }

    if (strcmp(command, "Product") == 0) {
      char name[100];
      float price;
      int id;

      scanf("%s", name);
      scanf("%f", &price);
      scanf("%d", &id);

      addProduct(&products, &productCount, &productCapacity, id, name, price);

      for (int i = 0; i < orderCount; i++) {
        if (pendingOrders[i].product_id == id) {
          printf("Client %s ordered %s\n", pendingOrders[i].client_address, name);
          removeOrder(&pendingOrders, &orderCount, i);
          i--;
        }
      }
    } else if (strcmp(command, "Order") == 0) {
      char address[100];
      int product_id;

      scanf("%s", address);
      scanf("%d", &product_id);

      Product* p = findProduct(products, productCount, product_id);
      if (p != NULL) {
        printf("Client %s ordered %s\n", address, p->name);
      } else {
        addOrder(&pendingOrders, &orderCount, &orderCapacity, product_id, address);
      }
    }
  }

  free(products);
  free(pendingOrders);

  return 0;
}