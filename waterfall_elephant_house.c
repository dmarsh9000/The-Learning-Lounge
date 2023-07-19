#include <stdio.h>
#include <stdlib.h>

void welcome();
void hardwareSetup();
void generateIdeasMenu();
void learn();
void addIdea();
void editIdea();
void deleteIdea();
void printIdeas();
int numIdeas;

// Define maximum number of ideas
#define MAX_IDEAS 10

// Declare Idea structure
struct Idea 
{
	int	number;
    char title[50];
    char description[50];
    int importance;
    int checked;
};

// Declare idea database
struct Idea ideas[MAX_IDEAS] = {0};

int main()
{
	while (1)
	{
		// Call welcome function
		welcome();
			
		// Call hardware setup function
		hardwareSetup();
			
		// Call menu function
		generateIdeasMenu();
			
		// Call learn function
		learn();
			
		// Call add idea function
		addIdea();
			
		// Call edit idea function
		editIdea();
			
		// Call delete idea function
		deleteIdea();
			
		// Call print idea function
		printIdeas();
	}
	return 0;
}

// Welcome user
void welcome()
{
	//Display Welcome Message
	printf("Welcome to the Learning Lounge! An interactive and creative space to generate, edit and discard ideas.\n");
}

// Setup hardware
void hardwareSetup()
{
	// Setup hardware: lights, board, etc.
	printf("Setting up hardware: lights, board, etc.\n");
}

// Generate ideas
void generateIdeasMenu()
{
	// Generate ideas menu
	int choice;
	printf("1. Generate new idea\n");
	printf("2. Edit existing idea\n");
	printf("3. Delete existing idea\n");
	printf("4. Exit\n");
	
	printf("Please enter your choice: ");
	scanf("%d", &choice);
			
	switch(choice)
	{
		case 1: 
			addIdea();
			break;
		case 2:
			editIdea();
			break;
		case 3:
			deleteIdea();
			break;
		case 4:
			return;
		default:
			printf("Invalid choice\n");
	}
}

// Learn
void learn()
{
	// Display Learning Resources
	printf("Here are some of the best resources to help you in your learning journey:\n");
	printf("1. Khan Academy - https://www.khanacademy.org/\n");
	printf("2. Codecademy - https://www.codecademy.com/\n");
	printf("3. Udemy - https://www.udemy.com/\n");
	printf("4. Coursera - https://www.coursera.org/\n");
	printf("5. Lynda - https://www.lynda.com/\n");
	printf("6. Stack Overflow - https://stackoverflow.com/\n");
}

// Add idea
void addIdea()
{
	// Check if there are available spaces
	if(numIdeas >= MAX_IDEAS)
	{
		printf("Sorry, maximum number of ideas reached.\n");
		return;
	}
			
	// Get title
	printf("Please enter title: ");
	char title[50];
	scanf("%s", title);
	
	// Get description
	printf("Please enter description: ");
	char description[50];
	scanf("%s", description);
			
	// Get importance
	printf("Please enter importance level (1 to 5): ");
	int importance;
	scanf("%d", &importance);
	
	// Get checked
	printf("Please enter checked (0 for unchecked, 1 for checked): ");
	int checked;
	scanf("%d", &checked);
			
	// Store idea
	struct Idea idea;
	idea.number = numIdeas + 1;
	strcpy(idea.title, title);
	strcpy(idea.description, description);
	idea.importance = importance;
	idea.checked = checked;
	ideas[numIdeas] = idea;
	numIdeas++;
	
	// Print confirmation
	printf("Idea added!\n");
}

// Edit Idea 
void editIdea()
{
	// List ideas
	if(numIdeas == 0)
	{
		printf("No ideas available.\n");
		return;
	}
			
	printf("List of ideas:\n");
	for(int i = 0; i < numIdeas; i++)
	{
		printf("%d. %s\n", i + 1, ideas[i].title);
	}
			
	// Get idea number
	int ideaNumber;
	printf("Please enter idea number to edit: ");
	scanf("%d", &ideaNumber);
	ideaNumber--;
			
	// Get title
	printf("Please enter title: ");
	char title[50];
	scanf("%s", title);
			
	// Get description
	printf("Please enter description: ");
	char description[50];
	scanf("%s", description);
			
	// Get importance
	printf("Please enter importance level (1 to 5): ");
	int importance;
	scanf("%d", &importance);
			
	// Get checked
	printf("Please enter checked (0 for unchecked, 1 for checked): ");
	int checked;
	scanf("%d", &checked);
			
	// Store idea
	struct Idea idea;
	idea.number = ideaNumber + 1;
	strcpy(idea.title, title);
	strcpy(idea.description, description);
	idea.importance = importance;
	idea.checked = checked;
	ideas[ideaNumber] = idea;
	
	// Print confirmation
	printf("Idea edited!\n");
}

// Delete idea
void deleteIdea()
{
	// List ideas
	if (numIdeas == 0)
	{
		printf("No ideas available.\n");
		return;
	}
			
	printf("List of ideas:\n");
	for (int i = 0; i < numIdeas; i++)
	{
		printf("%d. %s\n", i + 1, ideas[i].title);
	}
			
	// Get idea number
	int ideaNumber;
	printf("Please enter idea number to delete: ");
	scanf("%d", &ideaNumber);
	ideaNumber--;
	
	// Shift ideas
	for (int i = ideaNumber; i < numIdeas - 1; i++)
	{
		ideas[i] = ideas[i + 1];
	}
			
	// Decrement number of ideas
	numIdeas--;
			
	// Print confirmation
	printf("Idea deleted!\n");
}

// Print Ideas
void printIdeas()
{
	// List ideas
	if (numIdeas == 0)
	{
		printf("No ideas available.\n");
		return;
	}
			
	printf("List of ideas:\n");
	for (int i = 0; i < numIdeas; i++)
	{
		printf("%d. %s\t\t Importance: %d\t\t Checked: %d\n", ideas[i].number, ideas[i].title, ideas[i].importance, ideas[i].checked);
		printf("   Description: %s.\n", ideas[i].description);
	}
	printf("\n");
}