n, k = gets.chomp.split.map(&:to_i)
input_ary = gets.chomp.split.map(&:to_i)

max = 0
for x in 0..n
    for y in 0..(n-x)
        for z in 0..k
            if x+y+z > k || x+y-z < 0
                # puts "skip"
                next
            end
            ary = []
            ary += input_ary[0..x-1] if x > 0
            ary += input_ary[n-y..n-1] if y > 0
            ary.sort! {|a,b| b <=> a}
            # puts
            # puts max
            # p ary[0..x+y-1-z]
            # p ary
            # puts "zj x y z"
            # p [x, y, z]
            max = [max, ary[0..x+y-1-z].inject(:+)].max if ary.length > 0
        end
    end
end
puts max
            
