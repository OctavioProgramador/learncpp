#include <vector>
#include <limits> // for std::numeric_limits
#include <iostream>

template<typename T>
T findMax(const std::vector<T> & arr)
{
	T max{};

	std::size_t length { arr.size() };
	if ( length > 0) {
	    max = std::numeric_limits<T>::lowest();
	    for (std::size_t index {0}; index < length; ++index) {
		T element { arr.at(index) };
		if (max < element) max = element;
	    }
	}

	return max;
}

int main()
{
    std::vector data1 { 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2 { -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3 { };
    std::cout << findMax(data3) << '\n';

    return 0;
}
