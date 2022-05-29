https://www.geeksforgeeks.org/difference-between-gcc-and-g/

------------------------------------------------------
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}
```

------------------------------------------------------
```cpp
#include <unistd.h>
#include <iostream>
int main()
{
  std::cout << "Hello "; // IMPORTANT: (cout.flush();) or `std::endl`
  sleep(10);
  std::cout << "World";
  std::cout << std::endl;
  return 0; // IMPORTANT: exit value
}
```

-------------------------------------------------------
```cpp
#include <unistd.h>
#include <iostream>
int main()
{
  std::cout << "Start" << std::endl;
  int i = 0;
  while(i<100){
    std::cout << std::to_string(++i) << " sleep" << std::endl;
    sleep(1);
  }
  return 0;
}
```

-------------------------------------------------------
```cpp
// CPP Program to demonstrate the signal() function
#include <csignal>
#include <iostream>
using namespace std;

void signal_handler(int signal_num)
{
	cout << "The interrupt signal is (" << signal_num
		<< "). \n";

	// It terminates the program
	exit(signal_num);
}

int main()
{
	// register signal SIGABRT and signal handler
	signal(SIGABRT, signal_handler);

	while (true)
		cout << "Hello GeeksforGeeks..." << endl;
	return 0;
}
```
