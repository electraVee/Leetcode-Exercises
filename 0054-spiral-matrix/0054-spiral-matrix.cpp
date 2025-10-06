class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    int f = matrix.size();  int c = matrix[0].size();

    int f_Initial = 0; int f_Final = f-1;
    int c_Initial = 0; int c_Final = c-1;

    int total = f * c;  int count = 0;

    vector <int> answer;

    while(count < total){

        for (int j = c_Initial; (j <= c_Final) && (count < total) ; j++){

            answer.push_back(matrix[f_Initial][j]);
            count++;
        }
            f_Initial++;

        for (int i = f_Initial; (i <= f_Final) && (count < total) ; i++){

            answer.push_back(matrix[i][c_Final]);
            count++;
        }
            c_Final--;
        
        for (int j = c_Final; (j >= c_Initial) && (count < total) ; j--){
        
            answer.push_back(matrix[f_Final][j]);
            count++;
        }
            f_Final--;

        for (int i = f_Final; (i >= f_Initial) && (count < total) ; i--){
            
            answer.push_back(matrix[i][c_Initial]);
            count++;
        }
            c_Initial++;    
        }

        return answer;
    }
};