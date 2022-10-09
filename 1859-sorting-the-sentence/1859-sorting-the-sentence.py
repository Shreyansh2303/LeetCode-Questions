class Solution:
    def sortSentence(self, s: str) -> str:
        
        numed_words = s.split(' ')
        
        ans_words = ['' for i in range(len(numed_words))]
        
        
        for word in numed_words:
            
            num = int(word[-1])
            ans_words[num-1] = word[:-1]
            
            
        ans = ''
        for word in ans_words:
            ans += word + ' '
            
        print(ans_words)
        
        return ans[:-1]
        