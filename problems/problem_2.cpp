float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    (i > j && j > k) ? result = i : (j > k) ? result = j : result = k;
    return result;
}