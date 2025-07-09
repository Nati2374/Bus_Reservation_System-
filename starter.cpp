#include <iostream>
#include <string> 
using namespace std;

// Constants
const int MAX_BUSES = 10;
const int MAX_RESERVATIONS = 50;

// Function prototypes
void displayBuses(string busNumbers[],
                  string destinations[],
                  int totalSeats[],
                  int bookedSeats[],
                  int busCount);
void makeReservation(string busNumbers[],
                     string destinations[],
                     int totalSeats[],
                     int bookedSeats[],
                     string reservationNames[][MAX_RESERVATIONS],
                     int reservationSeats[][MAX_RESERVATIONS],
                     int reservationCounts[],
                     int busCount);
void viewReservations(string busNumbers[],
                      string destinations[],
                      string reservationNames[][MAX_RESERVATIONS],
                      int reservationSeats[][MAX_RESERVATIONS],
                      int reservationCounts[], int busCount);
void cancelReservation(string busNumbers[],
                       string destinations[],
                       int totalSeats[],
                       int bookedSeats[],
                       string reservationNames[][MAX_RESERVATIONS],
                       int reservationSeats[][MAX_RESERVATIONS],
                       int reservationCounts[],
                       int busCount);
