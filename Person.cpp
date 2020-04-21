#include <iostream>
using namespace std;
class Person
{
	int age;
	public:
		int get_age() const {
			return age;
		}
		void set_age(int value){
			age = value;
		}

} person;

int main() {

Person pirate;

pirate.set_age(150);
printf("Age: %d years\n", pirate.get_age());

return 0;
}
