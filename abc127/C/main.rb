n,m = gets.chomp.split.map(&:to_i)
l_ary = []
r_ary = []

for i in 0..(m-1)
    a,b = gets.chomp.split.map(&:to_i)
    l_ary << a
    r_ary << b
end
l_ary.sort!
r_ary.sort!
if (r_ary[0] - l_ary[-1] + 1) >= 0
    puts  r_ary[0] - l_ary[-1] + 1
else
    puts 0
end