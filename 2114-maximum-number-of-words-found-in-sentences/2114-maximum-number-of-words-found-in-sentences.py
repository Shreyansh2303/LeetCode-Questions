class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        
        maxm = 0
        
        for sentence in sentences:
            
            word_count = 0
            for word in sentence.split(' '):
                word_count += 1
            
            maxm = max(maxm, word_count)
        
        
        return maxm