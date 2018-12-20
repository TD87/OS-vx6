# Performance Report: Priority Scheduler Vs Round Robin

# Example:
Fork 4 processes with priorities 0, 10, 20, 30 respectively.
Each process runs a For loop that calculates the sum of numbers from 0 to
10^9.

### Priority Scheduler Output:
- Process with priority 0 ends at 766 ticks
- Process with priority 10 ends at 786 ticks
- Process with priority 20 ends at 1228 ticks
- Process with priority 30 ends at 1237 ticks

The Processes with priority 0 and 10 end at around the same time as they
are running parallelly on 2 CPUs. Same reason for processes with priorities
20 and 30. The Processes with priorities 0 and 10 finish much earlier
than those with priorities 20 and 30 as the former two have higher priorities
than the latter two.

### Round Robin Scheduler Output
- Process with priority 30 ends at 928 ticks
- Process with priority 20 ends at 941 ticks
- Process with priority 0 ends at 943 ticks
- Process with priority 10 ends at 964 ticks

All 4 processes end at around the same time due to the nature of round robin.
