1)  **How to Compile and Run**

Step 1: g++ -std=c++17 index.cpp -o index

Step 2: .\index        


2) **Flow of Code Structure:** 
  - CAD Class has child class name:  Line & Circle
  - CAD class has display and clone virtual function implemented by child class (Line and Circle) 
  - Document class manage add, list, clone, remove, operation.
  - *UserInterface* class has functionality of addLine, adddCircle, cloneNewObject, DeleteObject,    listObjects functionality.


3) **Usage**
  - Run the program
  - Menu will run automatic without interaction
  - Enter coordinates.
  - Select the proper operations with number 





  ***Example :***
Enter Line Coordinate: x1, y1, x2, y2 
1
2
3
4
Enter Circle Coordinates : x,y,r
5
6
7
1. line:- 1 2 3 4
2. Circle :- 5 6 7


Select object number to clone:
1. line:- 1 2 3 4
2. Circle :- 5 6 7
2
Object Cloned Successfully
1. line:- 1 2 3 4
2. Circle :- 5 6 7
3. Circle :- 5 6 7


1. line:- 1 2 3 4
2. Circle :- 5 6 7
3. Circle :- 5 6 7
Select object number to delete: 1
1. Circle :- 5 6 7
2. Circle :- 5 6 7


PS C:\Users\prathamesh\OneDrive\Desktop\Test_17> 






