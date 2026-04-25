This program lets you:

🆕 Add new books
🧑‍🏫 Store student name who takes the book
📖 Issue a book
🛒 Buy a book
🗂 Save issue history
🗂 Save purchase history
🔎 Search books by name
📌 Show availability (Available ❎ Not Available)

Perfect for beginners learning C++, file handling, and basic data structures.

🛠 Features
✅ Add Book Details
ID
Name
Author
Student Name
Price
Pages

 📦Issue Book
Saves to issued_books.txt
Stores timestamp automatically

💰 Buy Book
Saves to purchased_books.txt
Stores timestamp

EXAMPLE RUN
==============================
Enter 1 to input details like Id, Name, Author, Student, Price, Pages
Enter 2 to display details
Enter 3 to search for a book
Enter 4 to quit
1

Enter Book Id:
101
Enter Book Name:
The C++ Programming Language
Enter Book Author:
Bjarne Stroustrup
Enter Student Name:
Rahul
Enter Book Price:
500
Enter Book Pages:
1376

Enter 1 to issue this book, or 2 to buy it:
1

Book 'The C++ Programming Language' issued successfully!
Book issue recorded successfully.

Search Example:
Enter Book Name to search: 
The C++ Programming Language

Book Found:
Author: Bjarne Stroustrup
Price: 500
Pages: 1376
Status: ❌ Not Available

issued_books.txt
Book Issued: The C++ Programming Language | Issued At: Sat Nov 15 13:45:21 2025

purchased_books.txt
Book Purchased: Clean Code | Price: $450 | Purchased At: Sat Nov 15 13:48:10 2025

Tech Used
C++
File Handling
Structures / Classes
Time & Date (ctime)