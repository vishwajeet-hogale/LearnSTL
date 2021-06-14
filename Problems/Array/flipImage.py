class Solution(object):
    def flipAndInvertImage(self, image):
        """
        :type image: List[List[int]]
        :rtype: List[List[int]]
        """
        new_image = []
        for li in image:
            new_image.append(li[::-1])
        for i in range(0,len(image)):
            for j in range(0,len(image)):
                new_image[i][j] = int(not new_image[i][j])
        return new_image