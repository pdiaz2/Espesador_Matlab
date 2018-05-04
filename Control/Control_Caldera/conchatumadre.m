load fisheriris
species = char(species);
Mdl = fitctree(meas,species);
MdlName = 'ClassTreeIris';
saveCompactModel(Mdl,MdlName);