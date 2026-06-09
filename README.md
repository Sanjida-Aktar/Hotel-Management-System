# Hotel Management System (C++ OOP Project)

## Project Overview

The Hotel Management System is a console-based application developed using Object-Oriented Programming (OOP) concepts in C++. The system helps hotel staff manage rooms, customers, bookings, check-ins, check-outs, billing, and hotel reports efficiently.

This project demonstrates the practical use of:

- Classes and Objects
- Encapsulation
- Inheritance
- Polymorphism
- File Handling
- Data Management

---

# Objectives

- Manage hotel rooms efficiently.
- Store customer information.
- Handle room reservations and bookings.
- Generate customer bills automatically.
- Maintain hotel records using files.
- Apply OOP concepts in a real-world project.

---

# Features

## 1. Login System

### Admin Login
- Secure login using username and password.
- Access all management features.

### Receptionist Login
- Limited access to customer and booking management.

---

## 2. Room Management

### Add Room
- Create a new room.
- Assign room number.
- Assign room category.
- Set room rent.

### View Rooms
- Display all room information.

### Search Room
- Search room by room number.
- 
### Delete Room
- Remove room information.

### Room Availability
- Show available rooms.
- Show occupied rooms.

---

## 3. Customer Management

### Add Customer
Store customer information:

- Customer ID
- Name
- Phone Number
- Email Address
- National ID (Optional)

### View Customer
- Display customer information.

### Search Customer
- Find customer using Customer ID.

### Delete Customer
- Remove customer records.

---

## 5. Booking Management

### Book Room
- Reserve available room.
- Save booking details.

### Booking Information
Store:

- Booking ID
- Customer ID
- Room Number
- Check-In Date
- Check-Out Date

### Booking History
- View previous bookings.

### Cancel Booking
- Cancel reservation.

---

## 6. Check-In System

### Customer Check-In
- Verify booking.
- Assign room.
- Update room status.

---

## 7. Check-Out System

### Customer Check-Out
- Calculate total stay.
- Generate final bill.
- Free room automatically.

---

## 8. Billing System

### Room Rent Calculation

Calculate:

Total Rent = Daily Rent × Number of Days

### Additional Charges

- Food Charge
- Laundry Charge
- Room Service Charge

### Discount System

Apply discount:

- More than 5 days stay = 10% discount
- More than 10 days stay = 15% discount

### Generate Invoice

Example:

----------------------------------
HOTEL BILL
----------------------------------
Customer Name : Rahim
Room Number   : 101
Room Type     : Deluxe
Days Stayed   : 3

Room Rent     : 12000
Food Charge   : 2000
Service Charge: 500

Total Amount  : 14500
----------------------------------

---

## 9. Hotel Services

### Food Ordering
- Order food from room.

### Laundry Service
- Request laundry service.

### Room Service
- Additional room facilities.

---

## 10. Customer Rating System

After checkout:

Customer can rate hotel service:

- 1 Star
- 2 Star
- 3 Star
- 4 Star
- 5 Star

Store customer feedback.

---

## 11. Reports and Statistics

### Daily Report

Display:

- Total Customers
- Total Bookings
- Available Rooms
- Occupied Rooms

### Revenue Report

Display:

- Daily Revenue
- Monthly Revenue
- Total Revenue

---

## 12. File Handling

Store data permanently using text files.

### rooms.txt
Stores room information.

### customers.txt
Stores customer information.

### bookings.txt
Stores booking records.

### bills.txt
Stores billing records.

### ratings.txt
Stores customer ratings.

---

# OOP Concepts Used

## Encapsulation

Private data members with public getter/setter functions.

## Inheritance

Person
│
├── Customer
│
└── Employee

Room
│
├── StandardRoom
│
├── DeluxeRoom
│
└── SuiteRoom

## Polymorphism

Virtual functions used for:

- Rent calculation
- Bill generation
- Room type handling

## Abstraction

Abstract Room class used as a base class.

---

# Suggested Classes

## Person Class

Attributes:
- Name
- Phone Number

## Customer Class

Attributes:
- Customer ID
- Email

## Employee Class

Attributes:
- Employee ID
- Role

## Room Class

Attributes:
- Room Number
- Room Type
- Rent
- Status

## Booking Class

Attributes:
- Booking ID
- Customer
- Room

## Bill Class

Attributes:
- Total Rent
- Service Charges
- Discount

## Hotel Class

Main controller class for managing the entire system.

---

# Main Menu

====================================
HOTEL MANAGEMENT SYSTEM
====================================

1. Login
2. Room Management
3. Customer Management
4. Booking Management
5. Check-In
6. Check-Out
7. Generate Bill
8. Reports
9. Exit

====================================

---

# Technologies Used

- C++
- Object-Oriented Programming (OOP)
- File Handling
- Standard Template Library (STL)

---

# Future Improvements

- Graphical User Interface (GUI)
- Database Integration (MySQL)
- Online Booking System
- QR Code Check-In
- Email Notification
- Mobile Application

---

# Conclusion

The Hotel Management System provides a complete solution for managing hotel operations. It simplifies room management, customer handling, reservations, billing, and reporting while demonstrating important OOP concepts such as encapsulation, inheritance, polymorphism, and abstraction in C++.
