#include <iostream>
#include <vector>
#include <limits> // for std::numeric_limits

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// returns true if extraction failed, false otherwise
bool clearFailedExtraction()
{
    // Check for failed extraction
    if (!std::cin) // If the previous extraction failed
    {
        if (std::cin.eof()) // If the stream was closed
        {
            std::exit(0); // Shut down the program now
        }

        // Let's handle the failure
        std::cin.clear(); // Put us back in 'normal' operation mode
        ignoreLine();     // And remove the bad input

        return true;
    }

    return false;
}

template<typename T>
void printArray(const std::vector<T> & array)
{
	std::size_t length { array.size() };

	for (std::size_t index { 0 }; index < length - 1; ++index)
	{
		std::cout << array[index] << ", ";
	}
	std::cout << array[length - 1] << '\n';
}

template<typename T>
int findIndexOfElementInArray(const std::vector<T> & array, T element)
{
	std::size_t length { array.size() };
	for (std::size_t index{ 0 }; index < length; ++index) {
		if (array[index] == element)
		{
			return static_cast<int>(index);
		}
	}
	return -1;
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int input {};

    std::cout << "Enter a number between 1 and 9: ";
    while(true){
    	std::cin >> input;

	if (clearFailedExtraction())
	{
		std::cout << "Please enter a valid input: ";
		continue;
	}

        ignoreLine(); 

    	if(input < 1 || input > 9)
    	{
    	    std::cout << 
		    "Please enter a number between 1 and 9: ";
    	}else
	{
		break;
	}
    }

    printArray(arr);

    int index{ findIndexOfElementInArray(arr, input) };
    if( index >= 0)
    {
	std::cout << "The number " << input << " has index " 
		<< index << '\n';
    } else
    {
	std::cout << "The number " << input << 
		" was not found\n";
    }

    return 0;
}
