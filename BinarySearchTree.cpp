//============================================================================
// Name        : Project 2.cpp
// Author      : Julia Coronado
// Version     : 1.0
// Copyright   : Copyright © 2017 SNHU COCE
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>



using namespace std;

//============================================================================
// Global definitions visible to all methods and classes
//============================================================================

// forward declarations
double strToDouble(string str, char ch);

// define a structure to hold bid information
struct Course {
    string CourseId; // unique identifier
    string title;

    }
};

// Internal structure for tree node
struct Node {
    Course Course;
    Node *left;
    Node *right;

    // default constructor
    Node() {
        left = nullptr;
        right = nullptr;
    }

    // initialize with a course

    }
};

//============================================================================
// Binary Search Tree class definition
//============================================================================

/**
 * Define a class containing data members and methods to
 * implement a binary search tree
 */
class BinarySearchTree {

private:
	struct node;


    void addNode(Node* node, Course);
    void inOrder(Node* node);
    Node* removeNode(Node* node, string CourseId);

public:
    BinarySearchTree();
    virtual ~BinarySearchTree();
    void InOrder();
    void Insert(Course));
    void Remove(string CourseId);
    Course Search(string CourseId);
};

/**
 * Default constructor
 */


//============================================================================
// Static methods used for testing
//============================================================================

/**
 * Display the course information to the console (std::out)
 *
 * @param bid struct containing the bid info
 */
void displayCourse(Course Course) {
    cout << Course << ": " << Course << " | " << Title << " | "
            << Title << endl;
    return;
}

/**
 * Load a txt file containing course information into a container
 *
 *
 */
void loadCourse(string csvPath, BinarySearchTree* bst)
    cout << "Loading Course Information " << txtPath << endl;





    // read and display header row - optional
    vector<string> header = file.getHeader();
    for (auto const& c : header) {
        cout << c << " | ";
    }
    cout << "" << endl;

    try {
        // loop to read rows of a txt file
        for (unsigned int i = 0; i < file.rowCount(); i++) {

            // Create a data structure and add to the collection of bids
            Course Course;
            Title.CourseId = file[i][1];
            title = file[i][0];


            //cout << "Item: " << course.title << ", Title: " << Course << endl;

            // push this bid to the end
            bst->Insert(Course);
        }
    } catch (csv::Error &e) {
        std::cerr << e.what() << std::endl;
    }
}

/**
 *
double strToDouble(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return atof(str.c_str());
}

/**
 * The one and only main() method
 */
int main(int argc, char* argv[]) {

    // process command line arguments
    string txt, Course Information;
    switch (argc) {
    case 1:
        txtPath = argv[1];
        Course Title = "Title";
        break;
    case 2:
        txtPath = argv[1];
        CourseId = argv[2];
        break;
    default:
        txtPath = "Course Information.txt";
        CourseId = "Title";
    }

    // Define a timer variable
    // creating a time to time the amount of  search time

    ticks = clock() - ticks; // current clock ticks minus starting clock ticks
               cout << "time: " << ticks << " clock ticks" << endl;
               cout << "time: " << ticks * 1.0 / CLOCKS_PER_SEC << " seconds" << endl;

    // Define a binary search tree to hold all bids
    BinarySearchTree* bst;
    bst = new BinarySearchTree();
    Course Course;

    int choice = 0;
    while (choice != 9) {
        cout << "Welcome to the course planner:" << endl;
        cout << "  1. Load Data Structure" << endl;
        cout << "  2. Print Course List" << endl;
        cout << "  3. Print Course" << endl;
        cout << "  4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;



    cout << "Good bye." << endl;

	return 0;
}
