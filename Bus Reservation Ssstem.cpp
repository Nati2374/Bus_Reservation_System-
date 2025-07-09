    /*
     * Students Name: [ Abrham Berihun, Bereket Shimelis, Biruk Yonas, Daaniel Worede,
     ...................Helina Abera, Habtamu Seleshe, Kenenisa Jaleta, Natnael Alemayehu ]
     * Course: Programming Fundamental I
     * Assignment: Bus Reservation System
     * Date: [7/09/2025]
     *
     * Description: Manages bus reservations using arrays and functions
     * Concepts Used: Arrays (1D and 2D), functions, control statements, loops
     */

    #include <iostream>
    #include <string>
    using namespace std;

    // Constants
    const int MAX_BUSES = 10;
    const int MAX_RESERVATIONS = 50;

    // Function prototypes
    void displayBuses(int busNumbers[],
                      string destinations[],
                      int totalSeats[],
                      int bookedSeats[],
                      int busCount);
    void makeReservation(int busNumbers[],
                         string destinations[],
                         int totalSeats[],
                         int bookedSeats[],
                         string reservationNames[][MAX_RESERVATIONS],
                         int reservationSeats[][MAX_RESERVATIONS],
                         int reservationCounts[],
                         int busCount);
    void viewReservations(int busNumbers[],
                          string destinations[],
                          string reservationNames[][MAX_RESERVATIONS],
                          int reservationSeats[][MAX_RESERVATIONS],
                          int reservationCounts[],
                          int busCount);
    void cancelReservation(int busNumbers[],
                           string destinations[],
                           int totalSeats[],
                           int bookedSeats[],
                           string reservationNames[][MAX_RESERVATIONS],
                           int reservationSeats[][MAX_RESERVATIONS],
                           int reservationCounts[],
                           int busCount);

    int main() {
        // Bus data using separate arrays (1D)
        int busNumbers[MAX_BUSES] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        string destinations[MAX_BUSES] = {"Addis Ababa", "Adama", "Hawasa", "Jimma", "BahirDar", "DireDawa", "Aksum", "Hareri", "Gonder", "DebreBirhan"};
        int totalSeats[MAX_BUSES] = {50, 40, 30, 45, 55, 35, 42, 48, 52, 38};
        int bookedSeats[MAX_BUSES] = {0};
        int busCount = 10;

        // Reservation data using 2D arrays
        string reservationNames[MAX_BUSES][MAX_RESERVATIONS];
        int reservationSeats[MAX_BUSES][MAX_RESERVATIONS];
        int reservationCounts[MAX_BUSES] = {0};

        int choice;

        do {
            cout << "\nBus Reservation System\n";
            cout << "1. Display Available Buses\n";
            cout << "2. Make a Reservation\n";
            cout << "3. View Reservations\n";
            cout << "4. Cancel Reservation\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
switch (choice) {
        case 1:
            displayBuses(busNumbers, destinations, totalSeats, bookedSeats, busCount);
            break;
        case 2:
            makeReservation(busNumbers, destinations, totalSeats, bookedSeats,
                            reservationNames, reservationSeats, reservationCounts, busCount);
            break;
        case 3:
            viewReservations(busNumbers, destinations, reservationNames, reservationSeats, reservationCounts, busCount);
            break;
        case 4:
            cancelReservation(busNumbers, destinations, totalSeats, bookedSeats,
                              reservationNames, reservationSeats, reservationCounts, busCount);
            break;
        case 5:
            cout << "Exiting the system.\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
    void displayBuses(int busNumbers[],
                      string destinations[],
                      int totalSeats[],
                      int bookedSeats[],
                      int busCount) {
        cout << "\nAvailable Buses:\n";
        for (int i = 0; i < busCount; i++) {
            cout << "Bus Number: " << busNumbers[i]
                 << ", Destination: " << destinations[i]
                 << ", Total Seats: " << totalSeats[i]
                 << ", Booked Seats: " << bookedSeats[i]
                 << ", Available: " << (totalSeats[i] - bookedSeats[i])
                 << endl;
        }
    }
    void makeReservation(int busNumbers[],
                         string destinations[],
                         int totalSeats[],
                         int bookedSeats[],
                         string reservationNames[][MAX_RESERVATIONS],
                         int reservationSeats[][MAX_RESERVATIONS],
                         int reservationCounts[],
                         int busCount) {
        int busNumber;
        string passengerName;
        int numberOfSeats;

        cout << "Enter Bus Number: ";
        cin >> busNumber;

        // Immediate check for valid bus number range
        bool busFoundInSystem = false;
        for (int i = 0; i < busCount; i++) {
            if (busNumbers[i] == busNumber) {
                busFoundInSystem = true;
                break;
            }
        }

        if (!busFoundInSystem) {
            cout << "Bus not found! Please enter a valid bus number.\n";
            return;
        }

        cout << "Enter Passenger Name (single word only): ";
        cin >> passengerName;
        cout << "Enter Number of Seats: ";
        cin >> numberOfSeats;
for (int i = 0; i < busCount; i++) {
            if (busNumbers[i] == busNumber) {
                // Check seat availability
                if (bookedSeats[i] + numberOfSeats > totalSeats[i]) {
                    cout << "Not enough seats available!\n";
                    return;
                }