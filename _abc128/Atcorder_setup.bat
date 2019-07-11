mkdir question_a question_b question_c question_d
for /d %%a in (question_*) do (
  cd %%a
  type nul > main.rb
  type nul > sample1.txt
  type nul > sample2.txt
  type nul > sample3.txt
  cd ..
)
