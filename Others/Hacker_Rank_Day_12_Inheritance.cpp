#include <iostream>
#include <vector>
using namespace std;
class Person
{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        Student(string firstName, string lastName, int id, vector<int>Scores):Person(firstName, lastName, id)
        {
            this->firstName=firstName;
            this->lastName=lastName;
            this->id=id;
            this->testScores=Scores;
        }
        char calculate()
        {
            int sum=0,i=0;
         //   vector<int> :: iterator itr;
           // itr=testScores.begin();
            for(;i<testScores.size();i++)
            {
                sum=sum+testScores[i];
            }
            float avg;
            avg=sum/i;
            if(avg>=90 && avg<=100)
            {
                return 'O';
            }
            else if(avg>=80 && avg<=90)
            {
                return 'E';
            }
            else if(avg>=70 && avg<=80)
            {
                return 'A';
            }
            else if(avg>=55 && avg<=70)
            {
                return 'P';
            }
            else if(avg>=40 && avg<=55)
            {
                return 'D';
            }
            else if(avg<40)
            {
                return 'T';
            }

        }
        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
