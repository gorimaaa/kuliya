// This is an auto generated file, do not edit it!
#ifndef DATA_H
#define DATA_H

typedef struct
{
	const char *ar;
	const char *en;
	const char *fr;
} kuliya_name;

typedef struct
{
	int per_year;
	const int slots[4];
} kuliya_terms;

typedef struct
{
	kuliya_name name;
	const char *type;
	kuliya_terms terms;
} kuliya_schema;

kuliya_schema umbm = {.name = {.ar = "جامعة محمد بوضياف مسيلة", .en = "University Mohamed Boudiaf M'sila", .fr = "Université Mohamed Boudiaf de M'Sila"}, .type = "UNIVERSITY"};
kuliya_schema umbm_fll = {.name = {.ar = "كلية الآداب واللغات", .en = "Faculty of Letters and Languages", .fr = "Faculté des Lettres et des Langues"}, .type = "FACULTY"};
kuliya_schema umbm_fll_dfll = {.name = {.ar = "قسم اللغة الفرنسية وآدابها", .en = "Department of French Language and Literature", .fr = "Département de Langue et Littérature Françaises"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fll_dall = {.name = {.ar = "قسم اللغة العربية وآدابها", .en = "Department of Arabic Language and Literature", .fr = "Département de Langue et Littérature arabes"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fll_dell = {.name = {.ar = "قسم اللغة الإنجليزية وآدابها", .en = "Department of English Language and Literature", .fr = "Département de Langue et Littérature Anglaises"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fdsp = {.name = {.ar = "كلية الحقوق والعلوم السياسية", .en = "Faculty of Law and Political Sciences", .fr = "Faculté de Droit et Sciences Politiques"}, .type = "FACULTY"};
kuliya_schema umbm_fdsp_ddroit = {.name = {.ar = "قسم القانون", .en = "Department of Law", .fr = "Département de Droit"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fdsp_dsp = {.name = {.ar = "قسم العلوم السياسية", .en = "Department of Political Science", .fr = "Département de Sciences Politiques"}, .type = "DEPARTMENT"};
kuliya_schema umbm_ftech = {.name = {.ar = "كلية التكنولوجيا", .en = "Faculty of Technology", .fr = "Faculté de Technologie"}, .type = "FACULTY"};
kuliya_schema umbm_ftech_dhydr = {.name = {.ar = "قسم الهيدروليكا", .en = "Department of Hydraulics", .fr = "Département d'Hydraulique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_ftech_dce = {.name = {.ar = "قسم الهندسة المدنية", .en = "Department of Civil Engineering", .fr = "Département de Génie Civil"}, .type = "DEPARTMENT"};
kuliya_schema umbm_ftech_dme = {.name = {.ar = "قسم الهندسة الميكانيكية", .en = "Department of Mecanical Engineering", .fr = "Département de Génie Mécanique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_ftech_dee = {.name = {.ar = "قسم الهندسة الكهربائية", .en = "Department of Electrical Engineering", .fr = "Département de Génie Electrique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_ftech_delec = {.name = {.ar = "قسم الالكترونيات", .en = "Department of Electronics", .fr = "Département d'Electronique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_iutm = {.name = {.ar = "معهد إدارة التكنولوجيا الحضرية", .en = "Urban Technology Management Institute", .fr = "Institut de Gestion des Technologies Urbaines"}, .type = "INSTITUTE"};
kuliya_schema umbm_iutm_dcm = {.name = {.ar = "قسم الاستشارات العلمية", .en = "Department of Scientific Counsil", .fr = "Département du Conseil Scientifique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_iutm_due = {.name = {.ar = "قسم الهندسة الحضرية", .en = "Department of Urban Engineering", .fr = "Département de Génie Urbain"}, .type = "DEPARTMENT"};
kuliya_schema umbm_iutm_dcg = {.name = {.ar = "قسم الأرضية المشتركة", .en = "Departement of common ground", .fr = "Département de terrain d'entente"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsegc = {.name = {.ar = "كلية العلوم الإقتصادية والتجارية وعلوم التسيير", .en = "Faculty of Economics, Business and Management Sciences", .fr = "Faculté des Sciences économiques, Commerciales et de Gestion"}, .type = "FACULTY"};
kuliya_schema umbm_fsegc_dsfc = {.name = {.ar = "قسم علوم المالية والمحاسبة", .en = "Department of Finance and Accounting Sciences", .fr = "Département des Sciences Financières et Comptables"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsegc_dsg = {.name = {.ar = "قسم علوم التسيير", .en = "Department of Management Sciences", .fr = "Département des Sciences de Gestion"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsegc_dse = {.name = {.ar = "قسم العلوم الإقتصادية", .en = "Department of Economic Sciences", .fr = "Département des Sciences économiques"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsegc_dsc = {.name = {.ar = "قسم العلوم التجارية", .en = "Department of Commercial Sciences", .fr = "Département des Sciences Commerciales"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fmi = {.name = {.ar = "كلية الرياضيات و اﻹعلام اﻵلي", .en = "Faculty of Mathematics and Computer Science", .fr = "Faculté des mathématiques et de l'informatique"}, .type = "FACULTY"};
kuliya_schema umbm_fmi_dcs = {.name = {.ar = "قسم اﻹعلام اﻵلي", .en = "Department of Computer Science", .fr = "Département Informatique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fmi_dmath = {.name = {.ar = "قسم الرياضيات", .en = "Department of Mathematics", .fr = "Département des Mathématiques"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fshs = {.name = {.ar = "كلية العلوم الإنسانية والاجتماعية", .en = "Faculty of Human Sciences and Social Sciences", .fr = "Faculté des sciences humaines et sociales"}, .type = "FACULTY"};
kuliya_schema umbm_fshs_dhist = {.name = {.ar = "قسم التاريخ", .en = "Department of History", .fr = "Département d'Histoire"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fshs_dphilo = {.name = {.ar = "قسم الفلسفة", .en = "Department of Philosophy", .fr = "Département de Philosophie"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fshs_dsci = {.name = {.ar = "قسم علوم الاعلام والاتصال", .en = "Department of Information and Communication Sciences", .fr = "Département des Sciences de l'Information et de la Communication"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fshs_dsi = {.name = {.ar = "قسم العلوم الإسلامية", .en = "Department of Islamic Sciences", .fr = "Département des sciences islamiques"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fshs_dsocio = {.name = {.ar = "قسم علم الاجتماع", .en = "Department of Sociology", .fr = "Département de Sociologie"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsci = {.name = {.ar = "كلية العلوم", .en = "Faculty of Sciences", .fr = "Faculté des sciences"}, .type = "FACULTY"};
kuliya_schema umbm_fsci_dchi = {.name = {.ar = "قسم الكيمياء", .en = "Department of Chemistry", .fr = "Département de Chimie"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsci_dsa = {.name = {.ar = "قسم علوم الأرغونوميك", .en = "Department of Argonomic Sciences", .fr = "Département des Sciences Argonomiques"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsci_dbcmb = {.name = {.ar = "قسم الكيمياء الحيوية والأحياء الدقيقة", .en = "Department of Biochemistry and Microbiology", .fr = "Département de Biochimie et de Microbiologie"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsci_dphy = {.name = {.ar = "قسم الفيزياء", .en = "Department of Physics", .fr = "Département de Physique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_fsci_dsnv = {.name = {.ar = "قسم علوم الطبيعة و الحياة", .en = "Department of Natural and Life Sciences", .fr = "Département des Sciences de la Nature et de la Vie"}, .type = "DEPARTMENT"};
kuliya_schema umbm_istaps = {.name = {.ar = "معهد علوم وتقنيات النشاطات البدنية", .en = "Institute of Sciences and Technologies of Physical Activities", .fr = "Institut des sciences et technologies des activités physiques"}, .type = "INSTITUTE"};
kuliya_schema umbm_istaps_dags = {.name = {.ar = "قسم الإدارة و التسيير الرياضي", .en = "Department of Sports Administration and Management", .fr = "Département d'administration et de gestion des sports"}, .type = "DEPARTMENT"};
kuliya_schema umbm_istaps_dcbf = {.name = {.ar = "قسم التكوين القاعدي المشترك", .en = "Department of Common Basal Formation", .fr = "Département de Formation Basale Commune"}, .type = "DEPARTMENT"};
kuliya_schema umbm_istaps_dapsa = {.name = {.ar = "قسم النشاط البدني و الرياضي المكيف", .en = "Department of Adapted physical and sports activity", .fr = "Département d'Activité Physique et Sportive Adaptée"}, .type = "DEPARTMENT"};
kuliya_schema umbm_istaps_dfc = {.name = {.ar = "قسم التدريب الرياضي", .en = "Sports Training Department", .fr = "Département de la formation sportive"}, .type = "DEPARTMENT"};
kuliya_schema umbm_istaps_dep = {.name = {.ar = "قسم التربية البدنية", .en = "Department of Physical Education", .fr = "Département d'éducation Physique"}, .type = "DEPARTMENT"};
kuliya_schema umbm_istaps_dmcs = {.name = {.ar = "قسم الإعلام و الإتصال الرياضي", .en = "Department of Media and Sports Communication", .fr = "Département des Médias et de la Communication Sportive"}, .type = "DEPARTMENT"};
kuliya_schema umkb = {.name = {.ar = "جامعة محمد خيضر بسكرة", .en = "University of Mohamed Khider Biskra", .fr = "Université Mohamed Khider Biskra"}, .type = "UNIVERSITY"};
kuliya_schema umkb_fll = {.name = {.ar = "كلية الآداب واللغات", .en = "Faculty of Arts and Languages", .fr = "Faculté des Lettres et des Langues"}, .type = "FACULTY"};
kuliya_schema umkb_fdsp = {.name = {.ar = "كلية العلوم الاقتصادية والتجارية وعلوم التسيير", .en = "Faculty of Law and Political Science", .fr = "Faculté de Droit et et des Sciences politiques"}, .type = "FACULTY"};
kuliya_schema umkb_fsecsg = {.name = {.ar = "كلية العلوم الاقتصادية والتجارية وعلوم التسيير", .en = "Faculty of Economic, Commercial and Management Sciences", .fr = "Faculté des Sciences Economiques et Commerciales et des Sciences de Gestion"}, .type = "FACULTY"};
kuliya_schema umkb_fshs = {.name = {.ar = "كلية العلوم الانسانية و الاجتماعية", .en = "Faculty of Humanities and Social Sciences", .fr = "Faculté des Sciences Humaines et Sociales"}, .type = "FACULTY"};
kuliya_schema umkb_fsesnv = {.name = {.ar = "كلية العلوم الدقيقة و علوم الطبيعة و الحياة", .en = "Faculty of The Exact Sciences, Natural, and Life Sciences", .fr = "Faculté des Sciences Exactes, des Sciences de la nature et de la Vie"}, .type = "FACULTY"};
kuliya_schema umkb_fst = {.name = {.ar = "كلية العلوم والتكنلوجيا", .en = "Faculty of Science and Technology", .fr = "Faculté des Sciences et de la Technologie"}, .type = "FACULTY"};
kuliya_schema umkb_fst_dee = {.name = {.ar = "قسم الهندسة كهربائية", .en = "Department of Electrical Engeniering", .fr = "Departement de Génie Electrique"}, .type = "DEPARTMENT"};
kuliya_schema umkb_fst_dee_sec = {.name = {.ar = "تخصص التحكم الكهربائي", .en = "Specialy of Electrical Control", .fr = "Spécialité de commande électrique"}, .type = "SPECIALTY", .terms = {.per_year = 2, .slots = {7, 8, 9, 10}}};
kuliya_schema umkb_istaps = {.name = {.ar = "معهد علوم و تتقنيات النشاطات البدنية و الرياضية", .en = "Institute of Sciences and Techniques of Physical Activities and Sports", .fr = "Institut des Sciences et Techniques des Activités Physiques et Sportives"}, .type = "INSTITUTE"};
kuliya_schema usto = {.name = {.ar = "جامعة وهران للعلوم و التكنولوجيا محمد بوضياف", .en = "University of Sciences and Technology Oran Mohamed Boudiaf", .fr = "Université Des Sciences et de la Technologie Oran Mohamed Boudiaf"}, .type = "UNIVERSITY"};
kuliya_schema usto_ieps = {.name = {.ar = "معهد التربية البدنية والرياضة", .en = "Institute Of Physical Education And Sport", .fr = "Institut d'éducation physique et de sport"}, .type = "INSTITUTE"};
kuliya_schema usto_fch = {.name = {.ar = "كلية الكيمياء", .en = "Faculty of Chemistry", .fr = "Faculté de chimie"}, .type = "FACULTY"};
kuliya_schema usto_fch_dgc = {.name = {.ar = "قسم الهندسة الكيميائية", .en = "Departement of chemical engineering", .fr = "Déparetement Génie chimique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fch_dchm = {.name = {.ar = "قسم كيمياء المواد", .en = "Departement of Materials chemistry", .fr = "Déparetement Chimie des matériaux"}, .type = "DEPARTMENT"};
kuliya_schema usto_fch_dchp = {.name = {.ar = "قسم الكيمياء الفيزيائية", .en = "Departement of  Physical chemistry", .fr = "Déparetement Chimie physique"}, .type = "DEPARTMENT"};
kuliya_schema usto_ista = {.name = {.ar = "معهد العلوم التطبيقية والتكنولوجيا", .en = "Institute of Applied Science and Technology", .fr = "Institut des Sciences et Techniques Appliquées"}, .type = "INSTITUTE"};
kuliya_schema usto_fmi = {.name = {.ar = "كلية الرياضيات و الاعلام الالي ", .en = "Faculty  Mathematics and Computer Science", .fr = "Faculté des Mathématiques et Informatique"}, .type = "FACULTY"};
kuliya_schema usto_fmi_dinf = {.name = {.ar = "قسم الرياضيات", .en = "Departement of Mathematics", .fr = "Déparetement mathématiques"}, .type = "DEPARTMENT"};
kuliya_schema usto_fmi_dma = {.name = {.ar = "قسم الاعلام الالي", .en = "Departement of  Computer science", .fr = "Déparetement Informatique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fsnv = {.name = {.ar = "قسم المعيشة والبيئة", .en = "Departement of Living and environment", .fr = "Déparetement Vivant et environnement"}, .type = "FACULTY"};
kuliya_schema usto_fsnv_dbio = {.name = {.ar = "قسم التكنولوجيا الحيوية", .en = "Departement of Biotechnology", .fr = "Déparetement Biotechnologie"}, .type = "DEPARTMENT"};
kuliya_schema usto_fsnv_dve = {.name = {.ar = "قسم الهندسة الفيزيائية", .en = "Departement of physics Engineering ", .fr = "Déparetement Génie Phisique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fsnv_dgma = {.name = {.ar = "قسم علم الوراثة الجزيئية التطبيقية", .en = "Departement Applied Molecular Genetics", .fr = "Déparetement Génétique moléculaire appliquée"}, .type = "DEPARTMENT"};
kuliya_schema usto_fag = {.name = {.ar = "قسم هندسة المياه", .en = "Water engineering department", .fr = "Déparement Génie de l'eau"}, .type = "DEPARTMENT"};
kuliya_schema usto_fag_da = {.name = {.ar = "قسم العمارة", .en = "Architecture department", .fr = "déparetement Architecture"}, .type = "DEPARTMENT"};
kuliya_schema usto_fag_dge = {.name = {.ar = "كلية العمارة والهندسة المدنية", .en = "Faculty of Architecture and Civil Engineering", .fr = "Faculté d'architecture et génie civil"}, .type = "FACULTY"};
kuliya_schema usto_fag_dgc = {.name = {.ar = "قسم الهندسة المدنية", .en = "Civil engineering department", .fr = "Déparement Génie civil"}, .type = "DEPARTMENT"};
kuliya_schema usto_fge = {.name = {.ar = "كلية الهندسة الكهربائية", .en = "Faculty of Electrical Engineering", .fr = "Faculté de génie électrique"}, .type = "FACULTY"};
kuliya_schema usto_fge_dau = {.name = {.ar = "قسم الإلكترونيات", .en = "Department Automatic", .fr = "Department Automatique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fge_del = {.name = {.ar = "قسم الهندسة الكهربائية", .en = "Departement of Electrical engineering", .fr = "Déparetement Électrotechnique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fge_delt = {.name = {.ar = "قسم الهندسة الكهربائية", .en = "Departement of Electrical engineering ", .fr = "Déparetement Électrotechnique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fgm = {.name = {.ar = "كلية الهندسة الميكانيكية", .en = "Faculty of Mechanical Engineering", .fr = "Faculté de génie mécanique"}, .type = "FACULTY"};
kuliya_schema usto_fgm_dgme = {.name = {.ar = "قسم الهندسة الميكانيكية", .en = "Department of Mechanical Engineering ", .fr = "Department Génie Mécanique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fgm_dmm = {.name = {.ar = "قسم التعدين والمعادن", .en = "Departement of Mining and Metallurgy", .fr = "Déparetement Mine et Métallurgie"}, .type = "DEPARTMENT"};
kuliya_schema usto_fgm_dgma = {.name = {.ar = "قسم الهندسة البحرية", .en = "Department of Marine Engineering", .fr = "Department Génie Maritime"}, .type = "DEPARTMENT"};
kuliya_schema usto_fph = {.name = {.ar = "قسم تكنولوجيا المواد", .en = "Faculty of Materials technology ", .fr = "Faculté Technologie des matériaux "}, .type = "DEPARTMENT"};
kuliya_schema usto_fph_dgp = {.name = {.ar = "قسم الهندسة الفيزيائية", .en = "Departement of physics Engineering ", .fr = "Déparetement Génie Phisique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fph_dtm = {.name = {.ar = "قسم الاعلام الالي", .en = "Departement of  Computer science", .fr = "Déparetement Informatique"}, .type = "DEPARTMENT"};
kuliya_schema usto_fph_dpe = {.name = {.ar = "قسم فيزياء الطاقة", .en = "Departement of Physics energetics", .fr = "deparetement Physique énergétique"}, .type = "DEPARTMENT"};
kuliya_schema ummto = {.name = {.ar = "جامعة مولود معمري", .en = "University of Mouloud Mammeri", .fr = "Université Mouloud Mammeri"}, .type = "UNIVERSITY"};
kuliya_schema ummto_fmed = {.name = {.ar = "كلية الطب", .en = "Faculty of Medicine", .fr = "Faculté de Médecine"}, .type = "FACULTY"};
kuliya_schema ummto_fdsp = {.name = {.ar = "كلية الحقوق والعلوم السياسية", .en = "Faculty of Law and Political Sciences", .fr = "Faculté de Droit et des Sciences Politiques"}, .type = "FACULTY"};
kuliya_schema ummto_fsecsg = {.name = {.ar = "كلية الاقتصاد والأعمال وعلوم التسيير", .en = "Faculty of Economics, Business and Management Sciences", .fr = "Faculté des Sciences Economiques, Commerciales et des Sciences de Gestion"}, .type = "FACULTY"};
kuliya_schema ummto_fsbsa = {.name = {.ar = "كلية العلوم البيولوجية والعلوم الزراعية", .en = "Faculty of Biological Sciences and Agronomic Sciences", .fr = "Faculté des Sciences Biologiques et des Sciences Agronomiques"}, .type = "FACULTY"};
kuliya_schema ummto_fshs = {.name = {.ar = "كلية العلوم الإنسانية والاجتماعية", .en = "Faculty of Humanities and Social Sciences", .fr = "Faculté des sciences humaines et sociales"}, .type = "FACULTY"};
kuliya_schema ummto_dsat = {.name = {.ar = "قسم العلوم التطبيقية والتقنيات", .en = "Department of Applied Sciences and Technologies", .fr = "Département des Sciences Appliquée et des Technologies"}, .type = "DEPARTMENT"};
kuliya_schema ummto_fgei = {.name = {.ar = "كلية الهندسة الكهربائية وهندسة الإعلام الآلي", .en = "Faculty of Electrical and Computer Engineering", .fr = "Faculté de Génie Electrique et Informatique"}, .type = "FACULTY"};
kuliya_schema ummto_dmi = {.name = {.ar = "قسم الإعلام الآلي والرياضيات", .en = "Mathematics - Computer Science Department", .fr = "Département Mathématiques - Informatique"}, .type = "DEPARTMENT"};
kuliya_schema ummto_fgc = {.name = {.ar = "كلية هندسة التشييد", .en = "Faculty of Construction Engineering", .fr = "Faculté du Génie de la Construction"}, .type = "FACULTY"};
kuliya_schema usthb = {.name = {.ar = "جامعة هواري بومدين للعلوم والتكنولوجيا", .en = "University of Sciences and Technology Houari Boumediene", .fr = "Université Des Sciences et de la Technologie Houari Boumediene"}, .type = "UNIVERSITY"};
kuliya_schema usthb_fgmgp = {.name = {.ar = "كلية الهندسة الميكانيكية وهندسة الطرائق", .en = "Faculty of Mechanical Engineering and Process Engineering", .fr = "Faculté de Génie Mécanique et Génie de Procédés"}, .type = "FACULTY"};
kuliya_schema usthb_fgmgp_dcmp = {.name = {.ar = "قسم الإنشاءات الميكانيكية والتصنيع", .en = "Mechanical Construction and Manufacturing Department", .fr = "Département Construction Mécanique and Productique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fgmgp_dgcc = {.name = {.ar = "قسم الهندسة الكيميائية وعلم التبريد", .en = "Department of Chemical Engineering and Cryogenics", .fr = "Département Génie Chimique & Cryogénie"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fgmgp_dte = {.name = {.ar = "قسم الطاقة الحرارية", .en = "Thermo Energy Department", .fr = "Département Thermo Énergétique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fgmgp_dgegp = {.name = {.ar = "قسم الهندسة البيئية والهندسة الصيدلانية", .en = "Environmental Engineering and Pharmaceutical Engineering Department", .fr = "Département Génie Environnement & Génie Pharmaceutique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fgmgp_dsm = {.name = {.ar = "قسم علوم المواد", .en = "Department of Materials Sciences", .fr = "Département Sciences des Matériaux"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fsb = {.name = {.ar = "كلية العلوم البيولوجية", .en = "Faculty of Biological Sciences", .fr = "Faculté des Sciences Biologiques"}, .type = "FACULTY"};
kuliya_schema usthb_fsb_dee = {.name = {.ar = "قسم البيئة", .en = "Department of Ecology and Environment", .fr = "Département Écologie et Environnement"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fsb_dbcm = {.name = {.ar = "قسم البيولوجيا الخلوية والجزيئية", .en = "Cellular and Molecular Biology Department", .fr = "Département Biologie Cellulaire et Moléculaire"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fsb_dbpo = {.name = {.ar = "قسم علم الأحياء ووظائف الأعضاء", .en = "Department of Biology and Physiology of Organisms", .fr = "Département Biologie et Physiologie des Organismes"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fchimie = {.name = {.ar = "كلية الكيمياء", .en = "Faculty of Chemsitry", .fr = "Faculté de Chimie"}, .type = "FACULTY"};
kuliya_schema usthb_fchimie_dcpmi = {.name = {.ar = "قسم كيمياء وفيزياء المواد غير العضوية", .en = "Department of Chemistry and Physics of Inorganic Materials", .fr = "Département de Chimie et Physique des Matériaux Inorganique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fchimie_dcm = {.name = {.ar = "قسم الكيمياء الجزيئية", .en = "Department of Macromolecular Chemistry", .fr = "Département de Chimie Macromoleculaire"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fchimie_dcpt = {.name = {.ar = "قسم الكيمياء الفيزيائية والنظرية", .en = "Department of Physical and Theoretical Chemistry", .fr = "Département de Chimie Physique et Théorique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fchimie_dcoa = {.name = {.ar = "قسم الكيمياء العضوية التطبيقية", .en = "Department of Applied Organic Chemistry", .fr = "Département de Chimie Organique Appliquée"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fphy = {.name = {.ar = "كلية الفيزياء", .en = "Faculty of Physics", .fr = "Faculté de Physique"}, .type = "FACULTY"};
kuliya_schema usthb_fphy_demf = {.name = {.ar = "قسم ميكانيكا الطاقة والموائع", .en = "Department of Energy and Fluid Mechanics", .fr = "Département d’Energétique et Mécanique des Fluides"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fphy_dmc = {.name = {.ar = "قسم المواد والمكونات", .en = "Materials and Components Department", .fr = "Département Matériaux et Composant"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fphy_dpr = {.name = {.ar = "قسم الفيزياء الإشعاعية", .en = "Department of Radiation Physics", .fr = "Département de Physique des Rayonnements"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fphy_dpt = {.name = {.ar = "قسم الفيزياء النظرية", .en = "Department of Theoretical Physics", .fr = "Département de Physique Théorique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fstgat = {.name = {.ar = "كلية علوم اﻷرض و تهيئة اﻹقليم", .en = "Faculty of Earth Sciences and Country Planning", .fr = "Faculté des Sciences de la terre et Aménagement du Territoire"}, .type = "FACULTY"};
kuliya_schema usthb_fstgat_dgat = {.name = {.ar = "قسم الجيوفيزياء", .en = "Department of Geophysics", .fr = "Département de Géophysique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fstgat_dg = {.name = {.ar = "قسم الجيولوجيا", .en = "Department of Geology", .fr = "Département de Géologie"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fstgat_dgp = {.name = {.ar = "قسم الجغرافيا والتخطيط الإقليمي", .en = "Department of Geography and Regional Planning", .fr = "Département de Géographie et de l’Aménagement du Territoire"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fei = {.name = {.ar = "كلية اﻹلكترونيك و اﻹعلام اﻵلي", .en = "Faculty of Electronics and Computer Science", .fr = "Faculté d’Electronique et d’Informatique"}, .type = "FACULTY"};
kuliya_schema usthb_fei_auto = {.name = {.ar = "قسم الأجهزة والأتمتة", .en = "Instrumentation and Automation Department", .fr = "Département Instrumentation et Automatique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fei_info = {.name = {.ar = "قسم اﻹعلام اﻵلي", .en = "Department of Computer Science", .fr = "Département Informatique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fei_telecom = {.name = {.ar = "قسم اﻹتصال", .en = "Telecommunications Department", .fr = "Département Télécommunication"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fei_elt = {.name = {.ar = "قسم اﻹلكترونيك", .en = "Department of Electronics", .fr = "Département Electrotechnique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fmath = {.name = {.ar = "كلية الرياضيات", .en = "Faculty of Mathematics", .fr = "Faculté de Mathématiques"}, .type = "FACULTY"};
kuliya_schema usthb_fmath_da = {.name = {.ar = "قسم التحليل", .en = "Analysis Department", .fr = "Département Analyse"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fmath_dps = {.name = {.ar = "قسم الاحتمالات والإحصاء", .en = "Probability and Statistics Department", .fr = "Département Probabilités et statistiques"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fmath_dro = {.name = {.ar = "قسم البحوث التشغيلية", .en = "Operational Research Department", .fr = "Département Recherche Opérationnelle"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fmath_datn = {.name = {.ar = "قسم الجبر ونظرية الأعداد", .en = "Department of Algebra and Number Theory", .fr = "Département Algèbre et théorie des nombres"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fgc = {.name = {.ar = "كلية الهندسة المدنية", .en = "Faculty of Civil Engineering", .fr = "Faculté de Génie Civil"}, .type = "FACULTY"};
kuliya_schema usthb_fgc_dgh = {.name = {.ar = "قسم الجيوتكنيك والهيدروليكا", .en = "Department of Geotechnics and Hydraulics", .fr = "Département de Géotechnique et Hydraulique"}, .type = "DEPARTMENT"};
kuliya_schema usthb_fgc_dsm = {.name = {.ar = "قسم الهياكل والمواد", .en = "Department of Structures and Materials", .fr = "Département de Structures et Matérieux"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facdr = {.name = {.ar = "كلية الحقوق", .en = "Faculty Of Law", .fr = "Faculté De Droit"}, .type = "FACULTY"};
kuliya_schema ubma_facdr_pld = {.name = {.ar = "قسم القانون العام", .en = "Public Law Department", .fr = "Département De Droit Public"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facdr_psd = {.name = {.ar = "قسم العلوم السياسية", .en = "Political Sciences Department", .fr = "Département Des Sciences Politiques"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc = {.name = {.ar = "كلية العلوم", .en = "Faculty Of Sciences", .fr = "Faculté Des Sciences"}, .type = "FACULTY"};
kuliya_schema ubma_facsc_pd = {.name = {.ar = "قسم الفلسفة", .en = "Physics Department", .fr = "Département De Philosophie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_ssd = {.name = {.ar = "قسم علوم البحار", .en = "Sea Sciences Department", .fr = "Département Des Sciences De La Mer"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_nlsd = {.name = {.ar = "قسم علوم الطبيعة والحياة", .en = "Nature And Life Sciences Department", .fr = "Département Nature Et Sciences De La Vie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_bd = {.name = {.ar = "قسم علم المكتبيات", .en = "Biology Department", .fr = "Département Biblitheconomy"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_mcd = {.name = {.ar = "قسم الرياضيات و الإعلام الألي", .en = "Mathematics And Computing Department", .fr = "Département Mathématiques Et Informatique"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_md = {.name = {.ar = "قسم الرياضيات", .en = "Mathematics Department", .fr = "Département De Mathématiques"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_msd = {.name = {.ar = "قسم العلوم الإدارية", .en = "Material Sciences Department", .fr = "Département Des Sciences De Gestion"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsc_cd = {.name = {.ar = "قسم الكيمياء", .en = "Chemistry Department", .fr = "Département De Chimie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facscm = {.name = {.ar = "كلية العلوم الطبية", .en = "Faculty Of Medical Sciences", .fr = "Faculté Des Sciences Médicales"}, .type = "FACULTY"};
kuliya_schema ubma_facscm_pd = {.name = {.ar = "قسم الصيدلة", .en = "Pharmacy Department", .fr = "Département de Pharmacie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facscm_ddm = {.name = {.ar = "قسم طب الأسنان", .en = "Department Of Dental Medicine", .fr = "Département De Médecine Dentaire"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facscm_md = {.name = {.ar = "قسم الطب", .en = "Medicine Department", .fr = "Département De Mathématiques"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facscm_tt = {.name = {.ar = "", .en = "Teacher Training", .fr = ""}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs = {.name = {.ar = "كلية الآداب والعلوم الإنسانية والاجتماعية", .en = "Faculty Of Letters, Humanities And Social Sciences", .fr = "Faculté Des Lettres, Sciences Humaines Et Sociales"}, .type = "FACULTY"};
kuliya_schema ubma_faclschs_pd = {.name = {.ar = "قسم الفلسفة", .en = "Philosophy Department", .fr = "Département De Philosophie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_alld = {.name = {.ar = "قسم اللغة العربية وآدابها", .en = "Arabic Language And Literature Department", .fr = "Département De Langue Et Littérature Arabes"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_sd = {.name = {.ar = "قسم الاجتماع", .en = "Sociology Department", .fr = "Département De Sociologie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_icsd = {.name = {.ar = "قسم علوم الإعلام والاتصال", .en = "Information And Communication Sciences Department", .fr = "Département Des Sciences De L'Information Et De La Communication"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_fld = {.name = {.ar = "قسم اللغة الفرنسية", .en = "French Language Department", .fr = "Département De Langue Française"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_hd = {.name = {.ar = "قسم التاريخ", .en = "History Department", .fr = "Département D'Histoire"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_bd = {.name = {.ar = "قسم علم المكتبيات", .en = "Biblitheconomy Department", .fr = "Département Biblitheconomy"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_eld = {.name = {.ar = "قسم اللغة الإنجليزية", .en = "English Language Department", .fr = "Département De Langue Anglaise"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_td = {.name = {.ar = "قسم الترجمة", .en = "Translation Department", .fr = "Service De Traduction"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_hssd = {.name = {.ar = "قسم العلوم الإنسانية والاجتماعية", .en = "Human And Social Sciences Department", .fr = "Département Des Sciences Humaines Et Sociales"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_psed = {.name = {.ar = "قسم التربية البدنية والرياضية", .en = "Physical And Sports Education Department", .fr = "Service D'Éducation Physique Et Sportive"}, .type = "DEPARTMENT"};
kuliya_schema ubma_faclschs_ild = {.name = {.ar = "قسم اللغة الإيطالية", .en = "Italian Language Department", .fr = "Département De Langue Italienne"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsceg = {.name = {.ar = "كلية الاقتصاد وعلوم التسيير", .en = "Faculty Of Economics And Management Sciences", .fr = "Faculté Des Sciences Économiques Et De Gestion"}, .type = "FACULTY"};
kuliya_schema ubma_facsceg_esd = {.name = {.ar = "قسم العلوم الاقتصادية", .en = "Economic Sciences Department", .fr = "Département Des Sciences Économiques"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsceg_ct = {.name = {.ar = "جذع مشترك", .en = "Common Trunk", .fr = "Tronc Commun"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsceg_fsd = {.name = {.ar = "قسم العلوم المالية", .en = "Financial Sciences Department", .fr = "Département Des Sciences Financières"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsceg_msd = {.name = {.ar = "قسم العلوم الإدارية", .en = "Management Sciences Department", .fr = "Département Des Sciences De Gestion"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsct = {.name = {.ar = "كلية علوم الأرض", .en = "Faculty Of Earth Sciences", .fr = "Faculté Des Sciences De La Terre"}, .type = "FACULTY"};
kuliya_schema ubma_facsct_pd = {.name = {.ar = "قسم التخطيط", .en = "Planning Department", .fr = "Département de la Planification"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsct_ad = {.name = {.ar = "قسم العمارة", .en = "Architecture Department", .fr = "Département D'Architecture"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsct_md = {.name = {.ar = "قسم التعدين", .en = "Mining Department", .fr = "Département des Mines"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsct_gd = {.name = {.ar = "قسم الجيولوجيا", .en = "Geology Department", .fr = "Département De Géologie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci = {.name = {.ar = "كلية العلوم الهندسية", .en = "Faculty Of Engineering Sciences", .fr = "Faculté Des Sciences De L'Ingénieur"}, .type = "FACULTY"};
kuliya_schema ubma_facsci_ped = {.name = {.ar = "قسم هندسة العمليات", .en = "Process Engineering Department", .fr = "Département Génie Des Procédés"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_hd = {.name = {.ar = "قسم الهيدروليك", .en = "Hydraulic Department", .fr = "Département Hydraulique"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_ed = {.name = {.ar = "القسم الكهروتقني", .en = "Electrotechnical Department", .fr = "Département Électrotechnique"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_std = {.name = {.ar = "قسم العلوم والتكنولوجيا", .en = "Science And Technology Department", .fr = "Département Des Sciences Et De La Technologie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_csd = {.name = {.ar = "قسم الإعلام الألي", .en = "Computer Science Department", .fr = "Département Informatique"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_md = {.name = {.ar = "قسم علم المعادن", .en = "Metalurgy Department", .fr = "Département Métallurgie"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_tt = {.name = {.ar = "", .en = "Teacher Training", .fr = ""}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_ced = {.name = {.ar = "قسم الهندسة المدنية", .en = "Civil Engineering Department", .fr = "Département Génie Civil"}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_d = {.name = {.ar = "", .en = "Doctorat", .fr = ""}, .type = "DEPARTMENT"};
kuliya_schema ubma_facsci_med = {.name = {.ar = "قسم الهندسة الميكانيكية", .en = "Mechanical Engineering Department", .fr = "Département de Génie Mécanique"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks = {.name = {.ar = "جامعة الجزائر 2  أبو القاسم سعد الله", .en = "University of Algiers 2 Abou El-kacem Saâdallah", .fr = "Université d’Alger 2 Abou El Kacem Saâdallah"}, .type = "UNIVERSITY"};
kuliya_schema ua2aks_fle = {.name = {.ar = "كلية العلوم الإنسانية", .en = "Faculty of Humanities", .fr = "Faculté des Sciences Humaines"}, .type = "FACULTY"};
kuliya_schema ua2aks_fle_dfr = {.name = {.ar = "قسم اللغة الفرنسية ", .en = "Department of French", .fr = "Département de Langue Française"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fle_dsgi = {.name = {.ar = "قسم اللغات الاسبانية , الألمانية , الايطالية  ", .en = "Department of Spanish, German & Italian", .fr = "Département des Langues Espagnole, Allemande, et Italienne"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fle_den = {.name = {.ar = "قسم اللغة الانجليزية ", .en = "Department of English", .fr = "Département de Langue Anglaise"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_it = {.name = {.ar = "معهد الآثار", .en = "Institute of archology", .fr = "Institut d’archéologie"}, .type = "INSTITUTE"};
kuliya_schema ua2aks_ia = {.name = {.ar = "معهد الترجمة", .en = "Institute of translation", .fr = "Institut de traduction"}, .type = "INSTITUTE"};
kuliya_schema ua2aks_fss = {.name = {.ar = "كلية العلوم الإنسانية", .en = "Faculty of humanities", .fr = "Faculté des sciences humaines"}, .type = "FACULTY"};
kuliya_schema ua2aks_fss_dedu = {.name = {.ar = "قسم علوم التربية", .en = "Department of educational sciences", .fr = "Département de sciences de l’éducation"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fss_dpsy = {.name = {.ar = "قسم علم النفس", .en = "Department of psychology", .fr = "Département de psychologie"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fss_dst = {.name = {.ar = "قسم الأرطوفونيا", .en = "Department of speech therapy", .fr = "Département d'orthophonie"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fss_dsocio = {.name = {.ar = "قسم علم الاجتماع", .en = "Department of sociology", .fr = "Département de sociologie"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fsh = {.name = {.ar = "كلية العلوم الإنسانية", .en = "Faculty of Humanities", .fr = "Faculté des Sciences Humaines"}, .type = "FACULTY"};
kuliya_schema ua2aks_fsh_dh = {.name = {.ar = "قسم الفلسفة", .en = "Department of philosophy", .fr = "Département de philosophie"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fsh_dph = {.name = {.ar = "قسم التاريخ", .en = "Department of history", .fr = "Département d'اhistoire"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_fsh_dld = {.name = {.ar = "قسم علم المكتبات والتوثيق", .en = "Department of librarianship and documentation", .fr = "Département de bibliothéconomie"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_falaol = {.name = {.ar = "كلية العلوم الإنسانية", .en = "Faculty of Humanities", .fr = "Faculté des Sciences Humaines"}, .type = "FACULTY"};
kuliya_schema ua2aks_falaol_dts = {.name = {.ar = "قسم علوم اللسان ", .en = "Department of Tongue Sciences", .fr = "Département des Sciences du Langage"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_falaol_dart = {.name = {.ar = "قسم الفنون ", .en = "Department of Arts", .fr = "Département des Arts"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_falaol_dtrl = {.name = {.ar = "قسم اللغة التركية والروسية ", .en = "Department of Turkish and Russian Languages", .fr = "Département de langues Turque et Russe"}, .type = "DEPARTMENT"};
kuliya_schema ua2aks_falaol_dala = {.name = {.ar = "قسم اللغة العربية وآدابها ", .en = "Department of Arabic Language and Arts", .fr = "Département de Langue et Lettres arabes et Langues Orientales"}, .type = "DEPARTMENT"};

#endif
