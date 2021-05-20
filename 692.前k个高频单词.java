import java.util.Map;

/*
 * @lc app=leetcode.cn id=692 lang=java
 *
 * [692] 前K个高频单词
 */

// @lc code=start
class Solution {
    public List<String> topKFrequent(String[] words, int k) {

        Map<String, Integer> map = new HashMap<>();

        for (String word: words) {
            map.put(word, map.getOrDefault(word, 0) + 1);
        }
        
        // 排序
        List<String> list = new ArrayList<>(map.keySet());
        list.sort((a, b)->{
            // 如果两个数量一样， 按照字典序
            if (map.get(a).equals(map.get(b))) {
                return a.compareTo(b);
            } else {
                return map.get(b) - map.get(a);
            }
        });
        return list.subList(0, k);
    }
}
// @lc code=end

