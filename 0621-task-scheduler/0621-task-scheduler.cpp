#define MAX_CHAR 26

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int count[MAX_CHAR] = {0};

        // Calculate the frequency of each task
        for (char task : tasks) {
            count[task - 'A']++;
        }

        // Sort the task frequencies in descending order
        sort(count, count + MAX_CHAR, greater<int>());

        // Find the max frequency (most frequent task)
        int maxFreq = count[0];
        int idleTime = (maxFreq - 1) * n;

        // Fill the idle time with other tasks
        for (int i = 1; i < MAX_CHAR && idleTime > 0; ++i) {
            idleTime -= min(maxFreq - 1, count[i]);
        }

        idleTime = max(0, idleTime); // Avoid negative idle time

        // The total time is the sum of tasks and idle time
        return tasks.size() + idleTime;
    }
};

