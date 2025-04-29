//
// Created by Kristiyan Petsanov on 7.04.25.
//

#include <stdio.h>

typedef struct Vehicle {
  char name[20];
  int year;
  float price;
} Vehicle;

typedef struct VehicleType {
  char type[20];
  Vehicle vehicles[10];
  int count;
} VehicleType;

void print_vehicle_details(VehicleType veh) {
  printf("Vehicle Type: %s\n", veh.type);
  for (int i = 0; i < veh.count; i++) {
    printf("Vehicle Name: %s, Year: %d, Price: %.2f\n", veh.vehicles[i].name, veh.vehicles[i].year, veh.vehicles[i].price);
  }
}

int main() {
  int n;
  printf("Enter the number of vehicles: ");
  scanf("%d", &n);

  VehicleType vehicleTypes[n];

  for (int i = 0; i < n; i++) {
    printf("Enter vehicle type: ");
    scanf("%s", vehicleTypes[i].type);
    vehicleTypes[i].count = 0;

    printf("Enter the number of vehicles of this type: ");
    scanf("%d", &vehicleTypes[i].count);

    for (int j = 0; j < vehicleTypes[i].count; j++) {
      printf("Enter vehicle name: ");
      scanf(" %[^\n]", vehicleTypes[i].vehicles[j].name);
      printf("Enter vehicle year: ");
      scanf("%d", &vehicleTypes[i].vehicles[j].year);
      printf("Enter vehicle price: ");
      scanf("%f", &vehicleTypes[i].vehicles[j].price);
    }
  }

  printf("\nVehicle Types and Details:\n");
  for (int i = 0; i < n; i++) {
    print_vehicle_details(vehicleTypes[i]);
  }

  return 0;
}