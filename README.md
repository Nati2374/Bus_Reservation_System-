🚌 Bus Reservation System
St. Mary's University
Programming Fundamentals Course – C++ Project

Console Interface Demo

👥 Team Members

Name	                                ID	                           GitHub

Bereket Shimelis	                RCD/0238/2017	                   @beki8050

Bruk Yonas	                      RCD/0245/2017	                   @Whoisyourdaddy1962#

Daniel Worede                     RCD/0246/2017	                   @Wagone61

Helina Abera	                    RCD/1825/2017	                   @Linatera

Habtamu Seleshe	                  RCD/0257/2017	                   @habtamu-m

Kenenisa Jaleta	                  RCD/0263/2017	                   @milto14

Natnael	Alemayehu                 RCD/0269/2017	                   @Nati2374

Abraham	Berihun                   RCD/2546/2017	                   @AbrhamBerihun

📝 Project Description

A console-based C++ application that allows users to manage bus seat reservations. It demonstrates fundamental programming principles using arrays (1D and 2D), functions, conditional statements, and loops. The program supports adding, viewing, and canceling reservations on multiple buses.

🎯 Features

✅ View all available buses with seat availability
✅ Make a reservation with passenger name and seat count
✅ Cancel existing reservations by passenger name
✅ View all reservations per bus
✅ Input validation and limits (seat and reservation count)

📐 System Design

Bus Info stored in parallel arrays:

busNumbers, destinations, totalSeats, bookedSeats

Reservations stored using 2D arrays:

reservationNames[bus][reservation]

reservationSeats[bus][reservation]

Maximum of 10 buses and 50 reservations per bus

Functional decomposition with each task in a separate function

🔢 Key Variables and Structures

Variable Name	Type	Purpose

busNumbers[10]	int	Stores bus numbers

destinations[10]	string	Destination city names

totalSeats[10]	int	Total seats available per bus

bookedSeats[10]	int	Count of seats currently booked

reservationNames[10][50]	string	Passenger names per reservation

reservationSeats[10][50]	int	Seats reserved per passenger

reservationCounts[10]	int	Number of reservations per bus

🛠️ Function Breakdown

Function Name	Description

displayBuses()	Lists all buses with current seat availability

makeReservation()	Books seats for a given passenger and bus

viewReservations()	Displays all reservations grouped by bus

cancelReservation()	Removes reservation by name and adjusts seat count

🧪 Sample Menu

markdown

Copy code

Bus Reservation System  

1. Display Available Buses  

2. Make a Reservation  

3. View Reservations  

4. Cancel Reservation  

5. Exit  

Enter your choice: _


❗ Academic Constraints

❌ No file I/O (data is not persistent across runs)

❌ No dynamic memory or STL containers (e.g., vector)

✅ All logic is implemented using arrays and basic control structures

❌ No class or object-oriented programming (purely procedural design)


🔚 Notes

Passenger names are limited to single words.

Reservation will fail if seat limits or reservation limits are exceeded.

The code structure supports easy extension (e.g., adding file I/O or class abstraction later).
