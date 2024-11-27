#ifndef SORTS_HPP
#define SORTS_HPP

#include <vector>

class Sorts {
public:
//Sorts
    static void bubble_sort(std::vector<int>& arr);
    static void selection_sort(std::vector<int>& arr);
    static void insertion_sort(std::vector<int>& arr);
    static void quickSort(std::vector<int>& arr, int low, int high);
    static void heapSort(int arr[], int n);
    static void mergeSort(std::vector<int>& arr, int left, int right);

private:
    // Funciones auxiliares
    static int partition(std::vector<int>& arr, int low, int high);
    static void heapify(int arr[], int n, int i);
    static void merge(std::vector<int>& arr, int left, int mid, int right);
};

#endif
