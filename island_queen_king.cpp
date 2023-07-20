// The Learning Lounge

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Function prototypes
void welcomeMessage();
void printMenu();
void createClasses();
void modifyClasses();
void deleteClasses();
void enrollStudents();
void viewClasses();
void searchClasses();

// Main function
int main(){
    
    welcomeMessage();
    printMenu();
    
    int menu_choice = 0;
    
    std::cout << "Enter Choice: ";
    std::cin >> menu_choice;
    
    switch(menu_choice){
        case 1: 
            createClasses();
            break;
        case 2:
            modifyClasses();
            break;
        case 3:
            deleteClasses();
            break;
        case 4:
            enrollStudents();
            break;
        case 5:
            viewClasses();
            break;
        case 6:
            searchClasses();
            break;
        default:
            std::cout << "Invalid Choice Entered" << std::endl;
            printMenu();
            break;
    }
    
    return 0;
}

// Function definitions

void welcomeMessage(){
    std::cout << "Welcome to the Learning Lounge!" << std::endl;
    std::cout << "Here you can create your own classes and enroll students!" << std::endl;
}

void printMenu(){
    std::cout << "Menu" << std::endl;
    std::cout << "1. Create a class" << std::endl;
    std::cout << "2. Modify a class" << std::endl;
    std::cout << "3. Delete a class" << std::endl;
    std::cout << "4. Enroll students" << std::endl;
    std::cout << "5. View classes" << std::endl;
    std::cout << "6. Search classes" << std::endl;
}

void createClasses(){
    std::string class_name;
    
    std::cout << "Enter the name of the class you want to create: ";
    std::cin >> class_name;
    
    std::vector<std::string> classes;
    classes.push_back(class_name);
    
    std::cout << "Class created!" << std::endl;
}

void modifyClasses(){
    std::string class_name;
    std::string new_class_name;
    
    std::cout << "Enter the name of the class you want to modify: ";
    std::cin >> class_name;
    
    std::cout << "Enter the new name of the class: ";
    std::cin >> new_class_name;
    
    std::vector<std::string>::iterator it;
    it = std::find(classes.begin(), classes.end(), class_name);
    
    if(it != classes.end()){
        *it = new_class_name;
        std::cout << "Class modified!" << std::endl;
    }
    else{
        std::cout << "Class not found!" << std::endl;
    }
}

void deleteClasses(){
    std::string class_name;
    
    std::cout << "Enter the name of the class you want to delete: ";
    std::cin >> class_name;
    
    std::vector<std::string>::iterator it;
    it = std::find(classes.begin(), classes.end(), class_name);
    
    if(it != classes.end()){
        classes.erase(it);
        std::cout << "Class deleted!" << std::endl;
    }
    else{
        std::cout << "Class not found!" << std::endl;
    }
}

void enrollStudents(){
    std::string class_name;
    std::string student_name;
    
    std::cout << "Enter the name of the class: ";
    std::cin >> class_name;
    
    std::cout << "Enter the student name: ";
    std::cin >> student_name;
    
    std::vector<std::string>::iterator it;
    it = std::find(classes.begin(), classes.end(), class_name);
    
    if(it != classes.end()){
        std::vector<std::string> students;
        students.push_back(student_name);
        std::cout << "Student enrolled!" << std::endl;
    }
    else{
        std::cout << "Class not found!" << std::endl;
    }
}

void viewClasses(){
    std::vector<std::string>::iterator it;
    for(it = classes.begin(); it != classes.end(); it++){
        std::cout << *it << std::endl;
    }
}

void searchClasses(){
    std::string class_name;
    
    std::cout << "Enter the name of the class you want to search for: ";
    std::cin >> class_name;
    
    std::vector<std::string>::iterator it;
    it = std::find(classes.begin(), classes.end(), class_name);
    
    if(it != classes.end()){
        std::cout << "Class found!" << std::endl;
    }
    else{
        std::cout << "Class not found!" << std::endl;
    }
}