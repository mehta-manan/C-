#include <iostream>
#include <vector>
#include <algorithm>

void print_my_vector(std::vector<int> vect)
{
    for (int i : vect)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::vector<int> my_vect = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // print_my_vector(my_vect);

    // // std::sort(my_vect.begin(), my_vect.end(), [](int a, int b) {
    // //     return a < b;
    // // });
    // // print_my_vector(my_vect);
    // // std::make_heap(my_vect.begin(), my_vect.end());
    // // print_my_vector(my_vect);

    // // std::cout << std::endl;

    // // print_my_vector(my_vect);

    // // my_vect.push_back(10);
    // // print_my_vector(my_vect);
    // // std::push_heap(my_vect.begin(), my_vect.end());
    // // print_my_vector(my_vect);

    // std::make_heap(my_vect.begin(), my_vect.end());
    // std::pop_heap(my_vect.begin(), my_vect.end());
    // // std::pop_heap(my_vect.begin(), my_vect.end(), [](int a, int b) { return a > b; });

    // print_my_vector(my_vect);

    // std::sort(my_vect.begin(), my_vect.end(), std::greater<int>());
    // print_my_vector(my_vect);
    // std::sort(my_vect.begin(), my_vect.end(), std::less<int>());
    // std::sort(my_vect.begin(), my_vect.end());
    // print_my_vector(my_vect);
    // std::partial_sort(my_vect.begin(), my_vect.begin() + 3, my_vect.end());
    // std::nth_element(my_vect.begin(), my_vect.begin() + 4, my_vect.end());
    // std::make_heap(my_vect.begin(), my_vect.end());
    // print_my_vector(my_vect);
    // std::sort_heap(my_vect.begin(), my_vect.end());
    // std::vector<int> my_vect2 = {1, 2, 3, 1, 2, 3};
    // std::inplace_merge(my_vect2.begin(), my_vect2.begin() + 3, my_vect2.end());
    // print_my_vector(my_vect2);
    // std::partition(my_vect.begin(), my_vect.end(), [](int a) {if (a % 2 == 0) return true; });
    // std::rotate(my_vect.begin(), my_vect.end() - 1, my_vect.end());
    print_my_vector(my_vect);

   std::vector<int>::iterator;
}