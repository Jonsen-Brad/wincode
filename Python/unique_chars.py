class UniqueChars(object):

    def has_unique_chars(self, string):

        ### 补充代码 ###
        if string is none:
            return false

        return len(set(string)) == len(string)