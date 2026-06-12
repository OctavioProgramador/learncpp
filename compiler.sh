input_name="${1}"
output_name="${2}"

(
	cd "${PWD}"
	g++ "${input_name}" -o bin/"${output_name}" -O2 -DNDEBUG -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23
)

