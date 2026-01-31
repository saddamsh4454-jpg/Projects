<header>
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRPsSXTlHZ3qA3OYpB0cWIWDsCtYqu8ku74ng&s" width="800" height="400" alt ="image"/>
  
  <h1>LIBRARY MANAGEMENT SYSTEM</h1> </header>
<br>
<h3> Description : </h3><br>
<p> The Library Management System acts as a digital catalog and transaction manager. It stores book details
  (ID, title, author, genre, availability)and member information (ID, name, borrowed books). Through a menu-driven
  or graphical interface, users can perform operations like:<br>

Adding new books to the catalog<br>

Issuing and returning books<br>

Searching for books by various criteria<br>

Displaying all available or borrowed books</p><br>
A Library Management System (LMS) is a software application designed to simplify and automate the operations of a library.
It keeps track of books, members, and transactions such as issuing and returning books. The system acts as a digital catalog,
allowing users to search for books by title, author, or category, while helping librarians manage availability, maintain records, and reduce manual errors.<br>

<h5>From a technical perspective, the complexity of an LMS depends on its scale:</h5><br>

a) Basic systems (like student projects) use simple data structures such as arrays or linked lists, with operations like search and update running in linear time.<br>

b) Intermediate systems may use hash tables or trees for faster lookups, and include features like due dates, fines, and member management.<br>

c) Advanced systems (real-world applications) rely on databases and can handle thousands of records, multi-user access, and integration with web or mobile platforms.
Here, the complexity shifts toward system design challenges such as scalability, concurrency, and security.<br>

<h3>Objective :</h3>  To build a Library Management System using C++ that allows 
users to manage a collection of books. The system uses a Linked List data 
structure to store and manage books efficiently.
<br>
<h3>What the Project Does: </h3>
•	Add books with ID, title, and author (avoids duplicates).<br>
•	Remove books by ID (handles beginning, middle, end cases).<br>
•	Search books by ID and show details.<br>
•	Borrow/Return books with status updates.<br>
<h3>DSA Concepts Applied</h3><br>
•	Linked List :<br>
  <p>      	Each book is a node in a singly linked list.<br>
           	Efficient insertion and deletion without shifting elements (better than arrays for dynamic collections).<br></p>
•	Dynamic Memory Allocation :<br>
<p>	new and delete are used to manage nodes at runtime.<br></p>
•	Traversal : <br>
<p>	Searching, displaying, and updating require traversing the linked list.<br></p>
•	Pointers : <br>
<p>	Each node points to the next, forming the chain of books.<br></p>
•	Display : <br><p> all books in the library.<br></p>
•	Exit gracefully : <br><p> while cleaning up memory.<br></p>

<h3>Why This Problem Was Chosen</h3>
•	Practical relevance: Managing books is a relatable real-world scenario.<br>
•	Hands-on with Linked Lists: It forces you to implement insertion, deletion, and traversal in a meaningful way.<br>
•	OOP practice: Classes (Book, Library) encapsulate data and operations.<br>
•	Memory management learning: Teaches how to avoid leaks and handle dynamic allocation.<br>
•	Interactive design: The menu-driven interface makes it user-friendly and tests edge cases.<br>

<h3>Setup Instructions</h3><br>
<h3>How to Run</h3><br>
•	CLI (Command Line Interface)<br>
1.	Save the code in a file named main.cpp.<br>
2.	Compile using:<br>
                                                    g++ main.cpp -o library<br>
                                                     ./library<br>
•	IDE (Code::Blocks, Visual Studio, Dev-C++, etc.)<br>
1.	Create a new C++ project.<br>
2.	Copy-paste the code into main.cpp.<br>
3.	Build and run directly from the IDE.<br>
  <h3> Expected Input Formats</h3><br>
•	Book ID → Integer (e.g., 101)<br>
•	Title → String (entered with getline)<br>
•	Author → String (entered with getline)<br>
•	Menu Choice → Integer (1–7)<br>
<p>
 <h3>Challenges Faced & Solutions</h3>
•	Duplicate Book IDs : <br>
o	Challenge: Preventing multiple books with the same ID.<br>
o	Solution: Traversed the linked list before insertion to check for duplicates.<br>
•	Memory Management : <br>
o	Challenge: Avoiding memory leaks when removing books.<br>
o	Solution: Used delete on nodes and updated pointers carefully.<br>
•	Input Handling : <br>
o	Challenge: Mixing cin and getline caused skipped inputs.<br>
o	Solution: Added cin.ignore() after integer inputs to clear the buffer.<br>
•	Edge Cases : <br>
o	Challenge: Removing books from beginning, middle, or end of list.<br>
o	Solution: Handled separately using prev and head pointer checks.<br></p>

<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSrHrrNxp_O-P62aobE2i4q7Ve2JdyNTCHz6A&s" height="400" width="800" alt=" Image"/>
