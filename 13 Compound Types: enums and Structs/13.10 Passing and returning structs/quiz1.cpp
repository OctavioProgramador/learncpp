#include <iostream>

struct AdData
{
	int watched_ads {};
	double pct_of_users_clicked_on_ad {};
	double avg_earnings {};
};

void printAddData(const AdData& adData)
{
	std::cout << "Watched ads:\t" << adData.watched_ads << '\n';
	std::cout << "\% of users who clicked:\t" << adData.pct_of_users_clicked_on_ad << '\n'; 
	std::cout << "Average earning per clicked ad:\t" << adData.avg_earnings << '\n';
	std::cout << "Today's total earnings:\t" << adData.watched_ads * adData.avg_earnings * adData.pct_of_users_clicked_on_ad << '\n';
}

int main()
{
	int number_of_watched_adds {};
	std::cout << "How many ads were watched? ";
	std::cin >> number_of_watched_adds;

	double pct_users_who_clicked_on_ad {};
	std::cout << "What percentaje of users clicked on an ad? ";
	std::cin >> pct_users_who_clicked_on_ad;

	double avg_earnings {};
	std::cout << "What are the average earning per clicked ad? ";
	std::cin >> avg_earnings;

	AdData adData { number_of_watched_adds, pct_users_who_clicked_on_ad, avg_earnings };
	printAddData(adData);

}

