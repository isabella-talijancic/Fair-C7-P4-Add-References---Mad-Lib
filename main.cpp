// Mad-Lib 3.0
// Creates a story based on user input, using References

#include <iostream>
#include <string>

using namespace std;

string askText(const string &prompt);
int askNumber(const string &prompt);
void tellStory(const string &refName, const string &refNoun, int refNumber, const string &refBodyPart, const string &refVerb);

int main()
{
    cout << "* Welcome to Mad Libs! *\n\n";
    cout << "Answer the following to create your story:\n";
    cout << string(60, '-') << "\n";
   
    string refName = askText("Enter a name: ");
    string refNoun = askText("Enter a plural noun: ");
    int refNumber = askNumber("Enter a number: ");
    string refBodyPart = askText("Enter a body part: ");
    string refVerb = askText("Enter a verb: ");
    
    tellStory(refName, refNoun, refNumber, refBodyPart, refVerb);
	
	cout << "\n" << string(60, '-');
	cout << "\n* End of Story *";
    return 0;
}

string askText(const string &prompt)
{
    string text;
    cout << prompt;
    cin >> text; 
    return text;
}

int askNumber(const string &prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(const string &refName, const string &refNoun, int refNumber, const string &refBodyPart, const string &refVerb)
{
    cout << string(60, '-');
    cout << "\nHere is your 'Famous Explorer' story:\n\n";
    cout << "The famous explorer " << refName << " had nearly given up a life-long \n";
    cout << "quest to find The Lost City of " << refNoun << " when one day, the ";
    cout << refNoun << " found the explorer.\n";

    cout << "Surrounded by " << refNumber << " " << refNoun << ", a tear came to ";
    cout << refName << "'s "  << refBodyPart << ".\n";

    cout << "After all this time, the quest was finally over. And then, the ";
    cout << refNoun << " promptly devoured " << refName << ". ";

    cout << "The moral of the story? Be careful what you " << refVerb << " for.";
}