#!/bin/bash

./tests > new.log
cat 19920104_091532.log | cut -d ' ' -f2 > old_log
cat new.log | cut -d ' ' -f2 > new_log
diff old_log new_log > diff
rm old_log new_log
cat diff
