class TrieNode {
public:
    
    bool isterminal;//to check that we have reached end of word
    TrieNode *children[26];//trienode type pointer array of size 26
    
    TrieNode() {
        isterminal = false; //first we set all of them to false
        
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;  // and set all elements of array to null
    }
};



class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
        // Inserts a word into the trie.
    void insert(string word) {
        int word_len = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = word[i] - 'a';
            
            if (cur->children[k] == NULL)
            {
                cur->children[k] = new TrieNode();
            }
            
            cur = cur->children[k];
        }
        
        cur->isterminal = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        int word_len = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = word[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }
        
        return cur->isterminal;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        int word_len = prefix.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = prefix[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }
        
        return true;
    }
};
