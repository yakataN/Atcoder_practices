x, y, z, k = gets.chomp.split.map(&:to_i)
a_ary = gets.chomp.split.map(&:to_i)
b_ary = gets.chomp.split.map(&:to_i)
c_ary = gets.chomp.split.map(&:to_i)
c_ary.sort! {|a, b| b <=> a }

ans_ab = []
# 10^6
for i in 0...x
    for j in 0...y
        ans_ab << a_ary[i] + b_ary[j]
    end
end
# 10^6*logN
ans_ab.sort!  {|a, b| b <=> a }

ans_abc = []
# 3000*z zl 10^6
for i in 0...[3000, x * y].min
    for j in 0...z
        ans_abc << ans_ab[i] + c_ary[j]
    end
end

ans_abc.sort!  {|a, b| b <=> a }
for i in 0...k
    puts ans_abc[i]
end