class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        
        v1 = version1.split('.')
        v2 = version2.split('.')
        
        for i in range(len(v1)):
            v1[i] = int(v1[i])
        for i in range(len(v2)):
            v2[i] = int(v2[i])
            
        reverse = False
        
        if len(v1) < len(v2):
            v1, v2 = v2, v1
            reverse = True
            
        for i in range(len(v1)-len(v2)):
            v2.append(0)
            
        for i in range(len(v1)):
            
            if v1[i] < v2[i]:
                if not reverse: return -1
                else: return 1
            
            if v1[i] > v2[i]:
                if not reverse: return 1
                else: return -1
            
        
        return 0