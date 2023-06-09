char nextGreatestLetter(vector<char>& letters, char target) {
    // Find the upper bound of the target character in the sorted 'letters' vector
    // The upper bound is the first element that is greater than 'target'
    auto upper = upper_bound(letters.begin(), letters.end(), target);

    // Calculate the distance between the upper bound and the beginning of the vector
    // This gives us the index of the element in the original vector
    auto distance = upper - letters.begin();

    // Take the modulo of the distance by the size of the vector to handle wraparound
    // This ensures that if the upper bound is at the end of the vector, we wrap around to the beginning
    auto index = distance % letters.size();

    // Return the character at the calculated index
    return letters[index];
}
