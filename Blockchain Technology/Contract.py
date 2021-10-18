import smartpy as sp

class panjikaran(sp.Contract):
    def __init__(self):
        self.init(
            patientMap = sp.map(),    
        )
        

    @sp.entry_point       
    def addPatientRecord(self, params):
            Hid = params.Hid
            self.data.patientMap[Hid] = sp.record(
            name = params.name, 
            age = params.age, 
            gender = params.gender, 
            PhoneNumber = params.PhoneNumber, 
            Record = params.Record,
            
            
        )

@sp.add_test(name = "ADDING PATIENT DATA")
def test():
    scenario = sp.test_scenario()

    user = sp.test_account("Test")
    
    panjikaran1 = panjikaran()
    scenario += panjikaran1
    
    scenario.h1("Add New Patient")
    scenario += panjikaran1.addPatientRecord(
        Hid = "AdharHealth:0123456789", 
        name = "Yuvraj Singh Deora", 
        age = 20, 
        gender = "Male", 
        PhoneNumber = 6176179619, 
        Record = "Height -: 76 cms Blood count: 23mg"
         
    )
    # scenario.show(vaxScene.balance)
