// Mad_libs_2.0.cpp

#include <string>
#include <iostream>

using namespace std;

string askText(const string& promt);
int askNumber(const string& promt);
void tellStory(const string& name, const string&, int number, const string& bodyPart, const string& verb);

int main()
{
	cout << "Welcome to Mad Libs 2.0\n\n";
	cout << "Answer the following questions to help create a new story.\n\n";

	const string name = askText("Please enter a name: ");
	const string noun = askText("Please enter a plural noun: ");
	const int number = askNumber("Please enter a number: ");
	const string bodyPart = askText("Please enter a body part: ");
	const string verb = askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	return 0;
}

string askText(const string& promt)
{
	string text;
	cout << promt;
	cin >> text;
	return text;
}

int askNumber(const string& promt)
{
	int num;
	cout << promt;
	cin >> num;
	return num;
}

void tellStory(const string& name, const string& noun, int number, const string& bodyPart, const string& verb)
{
	cout << "\nHere's your story: \n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day. the ";
	cout << " found the explorer. \n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "prompty devoured ";
	cout << name << ", ";
	cout << "The moral of the story? Be careful what you ";
	cout << verb;
	cout << " for. ";
}