#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
struct Utility {
    static int sum(const std::vector<int>& nums) {
        return std::accumulate(nums.begin(), nums.end(), 0);
    }
    static double average(const std::vector<int>& nums) {
        return static_cast<double>(sum(nums)) / nums.size();
    }
    static void sortAsc(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
    }
    static void sortDesc(std::vector<int>& nums) {
        std::sort(nums.rbegin(), nums.rend());
    }
    static int maxElement(const std::vector<int>& nums) {
        return *std::max_element(nums.begin(), nums.end());
    }
    static int minElement(const std::vector<int>& nums) {
        return *std::min_element(nums.begin(), nums.end());
    }
};
int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    std::cout << "Sum: " << Utility::sum(numbers) << std::endl;
    std::cout << "Average: " << Utility::average(numbers) << std::endl;
    Utility::sortAsc(numbers);
    std::cout << "Sorted Ascending: ";
    for (int num : numbers) {
        std::cout << num << ' ';}
    std::cout << std::endl;
    Utility::sortDesc(numbers);
    std::cout << "Sorted Descending: ";
    for (int num : numbers) {
        std::cout << num << ' ';}
    std::cout << std::endl;
    std::cout << "Max Element: " << Utility::maxElement(numbers) << std::endl;
    std::cout << "Min Element: " << Utility::minElement(numbers) << std::endl;
    return 0;
}
