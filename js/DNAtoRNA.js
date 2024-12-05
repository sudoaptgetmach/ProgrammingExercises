class DNAtoRNA {
    static convert(dna) {
        return dna.replace(/T/g, 'U');
    }
}