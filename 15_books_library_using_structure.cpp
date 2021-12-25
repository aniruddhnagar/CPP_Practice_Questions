/*
Problem:----------
    Consider a library management system containing a large number of books, 
    where one needs to store ISBN no, author, title and availability information of each book. 
    
    Thereafter, implement functions supporting the following requirements:
        Show book information.
        Add new book.
        Display all books of a particular author.
        Display total number of books.
        Issue a book.

Solution:----------- 
    We shall create an interactive program with options redirecting to a switch-case statement 
    implementing each of the above functions. 
    we create a structure to store the book information, and for the library we create an array of such structures. 

    We implement each of the functionalities as follows:
    Book Information - We iterate over the array and print details of each book in the library.
    Add new Book - We ask for user inputs for title, author and ISBN. Increment the total, then insert the book into the array.
    Display Books of Author - Iterate over the library array and then display the books matching the appropriate author name.
    Display Total no. of books - Print the variable total.
    Issue a book - For issuing a book, ask for user input about the ISBN of the book to be issued and the member to whom it should be issued. 
                   Iterate over the array to locate the particular book. 
                   Thereafter, we need to check for the book's availability. 
                   If it is issued, we decline the request, otherwise we feed in the name of the member.
*/

#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

int total;

struct library 
{
    string isbn_no, title, author;
    bool issued;
    string member;
};

void add_book( library* ptr);
void book_info( library* ptr);
void author_books( library* ptr);
void issue_book( library* ptr);

int main()
{
    library books[SIZE];

    int option;
    while(1)
    {
        cout<< endl << endl;
        cout<< " Make a choice:------------ " << endl
            << " 0. Make exit" << endl
            << " 1. Add_book" << endl
            << " 2. Book_info" << endl
            << " 3. Disp_total" << endl
            << " 4. Author_books" << endl
            << " 5. Issue_book" << endl << endl;

        cout<< "Your choice: ";
        cin>> option;

        switch(option)
        {              
            case 0:
                exit(0);

            case 1:
                add_book(books);
                break;

            case 2:
                book_info(books);
                break;

            case 3:
                cout <<endl << "Total no of books: " << total <<endl << endl;
                break;

            case 4:
                author_books(books);
                break;

            case 5:
                issue_book(books);
                break;


            default :
                cout <<endl << "Invalid Choice!" << endl << endl;
                break;
        }
    }

    return 0;
}

void add_book( library* ptr)
{
    cout<< endl<< "Enter isbn_no: ";
    cin >> (ptr[total]).isbn_no;

    cout<< endl<< "Enter title: ";
    cin >> (ptr[total]).title;
    
    cout<< endl<< "Enter author: ";
    cin >> (ptr[total]).author;

    (ptr[total]).issued = 0;
    (ptr[total]).member = "none";

    total += 1;
}


void book_info( library* ptr)
{   
    if(total == 0)
    {
        cout<< "NO books found!" <<endl;
        return;
    }
    for(int i = 0; i< total; i++)
    {
        cout<< endl<< "IsbnNo: " << (ptr[i]).isbn_no;
        cout<< endl<< "Title : " << (ptr[i]).title;
        cout<< endl<< "Author: " << (ptr[i]).author;
        cout<< endl<< "Issued: " << (ptr[i]).issued;
        cout<< endl<< "Member: " << (ptr[i]).member;
        cout << endl ;
    }
    cout << endl ;
}

void author_books(library* ptr)
{   
    if(total == 0)
    {
        cout<< "NO books found!" <<endl;
        return;
    }

    string name;
    int c = 0;
    cout<< endl << "Which author: ";
    cin>> name;

    for(int i = 0; i< total; i++)
    {
        if((ptr[i]).author == name)
        {
            cout<< endl<< "Title : " << (ptr[i]).title;
            c++;
        }
        cout << endl ;
    }
    if(c == 0)
        cout<< "Author books not found!" <<endl;
    cout << endl ;
}

void issue_book(library* ptr)
{   
    if(total == 0)
    {
        cout<< "NO books found!" <<endl;
        return;
    }

    string name;
    cout<< endl << "Which book: ";
    cin>> name;

    for(int i = 0; i< total; i++)
    {
        if((ptr[i]).title == name)
        {
            if((ptr[i]).member != "none")
            {   
                cout<< endl<< "Book already issued!";
                return;
            }
            else
            {
                cout<< "Member name: ";
                cin>> name;
                (ptr[i]).member = name;
                (ptr[i]).issued = 1;
                cout<< endl<< "Book issued...";
            }
        }
    }
    cout << endl ;
}

