#include <iostream> // Include the iostream library for input/output operations
#include <climits> // Include the climits library for limits of integral types
using namespace std; // Use the standard namespace

unsigned int bitField = 2021; // Define a global variable bitField

// Function prototypes
int validateInt(); // Function to validate integer input
void TurnOn(int bit); // Function to turn on a specific bit
void TurnOff(int bit); // Function to turn off a specific bit
void Toggle(int bit); // Function to toggle a specific bit
void Negate(); // Function to negate all bits
void LeftShift(); // Function to perform left shift operation
void RightShift(); // Function to perform right shift operation
void PrintBits(); // Function to print the bits


int main()
{
    // Print the initial menu
    cout << "------------------------Bit Manipulation------------------------\n";
    cout << "\n\tbitField == " << bitField;
    cout << "\n\n\tBits:\t";
    PrintBits();
    cout << "\n\n\t\t1) TurnOn\n\t\t2) TurnOff\n\t\t3) Toggle\n\t\t4) Negate\n\t\t5) Left Shift\n\t\t6) Right Shift";
    cout << "\n\n\tEnter the number of the operation you'd like to perform: ";
    int choice1 = validateInt(); // Get the user's choice
    int choice2;
    if (choice1 < 4)
    {
        cout << "\n\n\tChoose bit index to perform operation on (0-31): ";
        choice2 = validateInt(); // Get the bit index if necessary
    }
    // Perform the chosen operation
    switch (choice1)
    {
        case 1: TurnOn(choice2); cout << "\n\tTurned on bit " << choice2 << "!\n\n\t\t"; PrintBits(); break;
        case 2: TurnOff(choice2); cout << "\n\tTurned off bit " << choice2 << "!\n\n\t\t"; PrintBits(); break;
        case 3: Toggle(choice2); cout << "\n\tToggled bit " << choice2 << "!\n\n\t\t"; PrintBits(); break;
        case 4: Negate(); cout << "\n\tNegated it!\n\n\t\t"; PrintBits(); break;
        case 5: LeftShift(); cout << "\n\tLeft Shifted it!\n\n\t\t"; PrintBits(); break;
        case 6: RightShift(); cout << "\n\tRight Shifted it!\n\n\t\t"; PrintBits(); break;
        default: cout << "\n\tInvalid choice!\n"; break;
    }
    cout << endl << endl;
    system("pause"); // Pause the console
}

int validateInt() {
    int x;
    cin >> x;
    // Validate the input
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\n\tError, invalid input please try again:  ";
        cin >> x;
    }
    cin.ignore(INT_MAX, '\n');
    return x; // Return the validated integer
}

void TurnOn(int bit) {
    bitField = (bitField | (1 << bit)); // Turn on the specified bit
}

void TurnOff(int bit) {
    bitField = (bitField & ~(1 << bit)); // Turn off the specified bit
}

void Toggle(int bit) {
    bitField = (bitField ^ (1 << bit)); // Toggle the specified bit
}

void Negate() {
    bitField = ~bitField; // Negate all bits
}

void LeftShift() {
    bitField = bitField << 1; // Perform left shift operation
}

void RightShift() {
    bitField = bitField >> 1; // Perform right shift operation
}

void PrintBits() {
    // Print all bits from most significant to the least significant
    for (int i = 31; i >= 0; i--)
    {
        cout << ((bitField >> i) & 1);
    }
}