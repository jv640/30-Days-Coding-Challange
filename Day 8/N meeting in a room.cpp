Sort all pairs(Meetings) in increasing order of second number(Finish time) of each pair.
Select first meeting of sorted pair as the first Meeting in the room and push it into result vector and set a variable time_limet(say) with the second value(Finishing time) of the first selected meeting.
Iterate from the second pair to last pair of the array and if the value of the first element(Starting time of meeting) of the current pair is greater then previously selected pair finish time (time_limit) then select the current pair and update the result vector (push selected meeting number into vector) and variable time_limit.
Print the Order of meeting from vector.



sort(meet, meet + n, comparator); 
  
    // Vector for storing selected meeting. 
    vector<int> m; 
  
    // Initially select first meeting. 
    m.push_back(meet[0].pos); 
  
    // time_limit to check whether new  
    // meeting can be conducted or not. 
    int time_limit = meet[0].end; 
  
    // Check for all meeting whether it  
    // can be selected or not. 
    for (int i = 1; i < n; i++) { 
        if (meet[i].start >= time_limit) 
        { 
            // Push selected meeting to vector 
            m.push_back(meet[i].pos); 
              
            // Update time limit. 
            time_limit = meet[i].end;  
        } 
    } 
  
    // Print final selected meetings. 
    for (int i = 0; i < m.size(); i++) { 
        cout << m[i] << " "; 
    } 
