/* clears the vector "answer" and fills it with all triangle 
 * numbers starting at 0 and up to and possibly including the 
 * maximum "maxval". */
void triangle( int maxval, vector<int>& answer) {
  // resize answer to be empty
  answer.resize(0);
  int t = 0; // the first triangle number
  int c = 1; // a "counter"
  while (t <= maxval) {
    // while t is small enough, add it to the vector
    answer.push_back(t);
    t = t + c;
    c = c + 1;
  }
}

Run this with the following main. (You will also need to #include both <iostream> and <vector>, and do using namespace std;, and also include the functions you use.)

int main() {
  vector<int> v;   // declare an empty vector
  triangle(100,v); // fill with triangle numbers
  printvector(v);  // print it
  return 0;
}
