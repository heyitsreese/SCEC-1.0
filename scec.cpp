#include <iostream>
#include <string>
#include <unistd.h>
#include <limits>
#include <cmath>

using namespace std;

bool loggedIn = false;
string charName;
string mapName;

void printBox(const string& text, int width) {
    int padding = width - text.length();

    cout << "+";
    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << "+" << endl;

    cout << "|";
    for (int i = 0; i < padding / 2; i++) {
        cout << " ";
    }
    cout << text;
    for (int i = 0; i < padding / 2; i++) {
        cout << " ";
    }
    cout << "|" << endl;

    cout << "+";
    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << "+" << endl;
}

bool login() {
    string mail, pass;
    int tries = 0;
    do {
        cout << "Please enter your email: ";
        cin >> mail;
        cout << "Please enter your password: ";
        cin >> pass;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (mail == "test@mail.com" && pass == "1") {
            loggedIn = true;
        } else {
            system("CLS");
            cout << "Loading...";
            sleep(1);
            system("CLS");
            cout << "Loading..";
            sleep(1);
            system("CLS");
            cout << "Loading.";
            sleep(1);
            system("CLS");
            cout << "Connecting to server..";
            sleep(1);
            system("CLS");
            cout << "Connecting to server...";
            sleep(1);
            system("CLS");
            cout << "Error, please try again. ";
            tries++;
            if (tries < 3) {
                cout << "You have " << 3 - tries << " tries left.\n";
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!loggedIn && tries < 3);
    if (tries == 3) {
        cout << "You have reached the maximum number of tries. Please try again later.";
        return false;
    }
    return true;
}

int charselect() {
    int schar;
    cout << "\t\tSYSTEM: CHARACTER SELECTION\n\n"
         << "Pick Your Character: \n\n";
    cout << "\t\t1. Cloudwarden Frostpeak (Mount Pulag)\n\n"
         << "\t\t2. Aurora Shorewhisper (Anawangin Cove)\n\n"
         << "\t\t3. Coco Zenwave (Siargao Island)\n\n"
         << "Enter your choice: ";
    cin >> schar;

    switch (schar) {
        case 1:
            charName = "Cloudwarden Frostpeak";
            break;
        case 2:
            charName = "Aurora Shorewhisper";
            break;
        case 3:
            charName = "Coco Zenwave";
            break;
    }

    return schar;
}
void Map(){
    cout << "\t\tSYSTEM: MAP SELECTION\n\n"
         << "Pick Your Map: \n\n";
    cout << "\t\t1. Mount Pulag\n\n"
         << "\t\t2. Anawangin Cove\n\n"
         << "\t\t3. Siargao Island\n\n";
    }
void FCM(const string& mapName) {
    cout << "*** FINAL CHALLENGE ***\n\n";
    int ans;
    cout << "You must now choose the final challenge to address and make a lasting environmental change. Here are three options, each representing a critical "
    "environmental challenge on " << mapName << ".\n\n";
    cout << "Options:\n";
    cout << "1. Soil Erosion and Trail Impact\n";
    cout << "2. Waste Management\n";
    cout << "3. Water Resource Degradation\n";
    cout << "Enter answer: ";
    cin >> ans;

    switch(ans) {
        int choice;
        case 1: {
            system("CLS");
            cout << "You have chosen Soil Erosion and Trail Impact\n";
        }
        case 2: {
            system("CLS");
            cout << "You chose to tackle WASTE MANAGEMENT. Which specific problem would you like to address?\n";
            cout << "Options:\n";
            cout << "1. IMPROPER DISPOSAL AND POLLUTION:  Inadequate waste disposal practices can lead to pollution of the camping site and its surroundings. If campers do not "
                    "adhere to proper waste management guidelines, litter and improperly discarded waste can contaminate the environment, negatively impacting ecosystems, wildlife, and "
                    "water sources.\n\n"
                    "2. NON-COMPLIANCE WITH LEAVE NO TRACE PRINCIPLES: The failure of campers to follow strict Leave No Trace principles poses a significant challenge. Leave No "
                    "Trace principles emphasize minimizing environmental impact by packing out all trash, leaving natural features undisturbed, and using designated waste disposal "
                    "areas. Non-compliance can result in the degradation of the camping site's natural beauty and ecological balance.\n\n"
                    "3. LACK OF DESIGNATED WASTE DISPOSAL AREAS: Campers may face challenges in finding or utilizing designated waste disposal areas. The absence of clearly marked "
                    "and accessible disposal sites can lead to haphazard waste disposal practices. Establishing well-defined and conveniently located waste disposal areas is crucial "
                    "for encouraging proper waste management and preventing the accumulation of litter in camping sites.\n";
            cout << ">> Enter choice: ";
            cin >> choice;
            switch (choice) {
                // IMPROPER
                case 1: {
                    system("CLS");
                    cout << "IMPROPER DISPOSAL AND POLLUTION: How will you proceed?\n";
                    cout << "Options:\n";
                    cout << "1. IMPLEMENT A 'PACK-IN, PACK-OUT' POLICY\n"
                            "Description: Enforce a strict 'Pack-In, Pack-Out' policy, requiring campers to take all their waste with them when leaving the camping site. Clearly communicate this policy through signage at trailheads, camping zones, and other relevant areas. Provide information on portable waste disposal solutions, such as portable trash bags, to make it convenient for campers to adhere to the policy.\n"
                            "CONSEQUENCES:\n"
                            "Positive: The 'Pack-In, Pack-Out' policy promotes personal responsibility, ensuring campers leave no trace and minimize their environmental impact. This reduces the risk of pollution and encourages a culture of self-reliance in waste disposal.\n"
                            "Negative: Some campers may find it inconvenient or may not be adequately prepared for this approach. Enforcement may be challenging, and some individuals might still neglect the policy.\n";
                    cout << "2. INTRODUCE RECYCLING STATIONS AND PROPER WASTE BINS\n"
                            "Description: Install designated recycling stations and waste bins throughout the camping site, clearly marked for different types of waste. Educate campers on proper waste separation and disposal methods, emphasizing the importance of recycling. Regularly empty and maintain these bins to ensure their effectiveness.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Providing accessible and well-labeled recycling stations encourages responsible waste disposal and promotes recycling practices. It reduces litter and minimizes the environmental impact of improperly discarded waste.\n"
                            "Negative: Campers may still mix recyclables with general waste, undermining the effectiveness of recycling efforts. Maintenance and regular emptying of bins may require additional resources.\n";
                    cout << "3. ORGANIZE CLEAN-UP EVENTS AND INCENTIVES\n"
                            "Description: Establish periodic clean-up events where campers are encouraged to participate in collecting and properly disposing of litter within the camping site. Introduce incentives such as discounts on future camping permits, camping gear, or recognition for individuals or groups who actively contribute to maintaining a clean environment.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Clean-up events create a sense of community responsibility, actively involving campers in maintaining the cleanliness of the camping site. Incentives motivate participation and contribute to a cleaner environment.\n"
                            "Negative: The success of clean-up events depends on camper participation, and some may not engage actively. Continuous efforts are needed to sustain the momentum and prevent a return to improper waste disposal practices.\n\n";
                    cout << ">> Enter choice: ";
                    cin >> choice;
                }
                // NON-COMPLIANCE
                case 2: {
                    system("CLS");
                    cout << "NON-COMPLIANCE WITH LEAVE NO TRACE PRINCIPLES: How will you proceed?\n";
                    cout << "Options:\n";
                    cout << "1. EDUCATIONAL CAMPAIGN AND RANGER PATROLS\n"
                            "Description: Implement an extensive educational campaign to inform campers about the importance of Leave No Trace principles. Distribute informational materials, conduct workshops, and utilize digital platforms to educate campers on responsible camping practices. Additionally, increase ranger patrols to monitor and guide campers towards proper waste disposal methods.\n"
                            "CONSEQUENCES:\n"
                            "Positive: An educated and informed camper base is more likely to adhere to Leave No Trace principles, leading to a reduction in environmental impact. Increased ranger presence acts as a deterrent and ensures immediate guidance for those unaware of proper waste disposal methods.\n"
                            "Negative: Despite educational efforts, some campers may still neglect responsible practices. The effectiveness of ranger patrols depends on the availability of resources and personnel.\n";
                    cout << "2. IMPLEMENT FINES FOR NON-COMPLIANCE\n"
                            "Description: Enforce a system of fines for campers who fail to comply with Leave No Trace principles, specifically related to improper waste disposal. Clearly communicate the fines through signage and educational materials, and assign responsibility to park rangers for monitoring and issuing fines when necessary.\n"
                            "CONSEQUENCES:\n"
                            "Positive: The threat of financial penalties can motivate campers to adhere to Leave No Trace principles, leading to improved waste disposal practices. Fines collected can be reinvested into environmental conservation efforts.\n"
                            "Negative: Some campers may view fines as punitive and may react negatively, potentially creating tension between campers and park authorities. Enforcement may also be challenging in remote or vast camping areas.\n";
                    cout << "3. COMMUNITY VOLUNTEER PROGRAM\n"
                            "Description: Establish a community volunteer program where experienced campers or local environmental enthusiasts actively engage with and educate fellow campers about Leave No Trace principles. These volunteers can organize regular clean-up events, provide guidance on waste disposal, and foster a sense of community responsibility.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Building a community-driven initiative encourages shared responsibility for the environment, fostering a culture of sustainable camping. Volunteer-led activities can have a positive impact on campers' attitudes towards Leave No Trace principles.\n"
                            "Negative: The success of the program relies on the availability and willingness of volunteers. Some campers may not respond positively to guidance from fellow campers, and the program's effectiveness may vary depending on community engagement.\n\n";
                    cout << ">> Enter choice: ";
                    cin >> choice;
                    if (choice == 1) {
                        system("CLS");
                        cout << "The character, opting for an educational campaign and increased ranger patrols to address improper waste disposal in the camping game, takes a proactive approach to "
                        "raise awareness and enforce responsible camping practices.\n\n";
                        cout << "*POSITIVE EFFECT*: Informed and Responsible Campers The impact is positive, with campers becoming more informed about Leave No Trace principles through workshops and "
                        "informational materials. The increased presence of rangers ensures immediate guidance, and campers start adopting responsible waste disposal methods. Over time, the camping site "
                        "witnesses a noticeable reduction in environmental impact, as campers actively contribute to preserving its natural beauty.\n";
                        cout << "*NEGATIVE EFFECT*: Some Campers Resist Despite the educational efforts and ranger patrols, a portion of campers may still neglect responsible practices. It becomes "
                        "apparent that changing long-standing habits is a gradual process. The effectiveness of ranger patrols is also contingent on available resources and personnel, leading to "
                        "occasional lapses in monitoring. The character faces the challenge of continuous education and resource management to ensure a sustained positive impact on waste disposal "
                        "practices within the camping site.\n\n";
                        cout << "\"In  response to the negative effects of this option, How will you proceed?\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Incentive-based Reward System:  Campers who consistently follow Leave No Trace principles and properly dispose of their waste could receive rewards such as discounts on future camping permits, exclusive access to certain areas, or recognition through a public acknowledgment system.\n\n"
                                "2. Mobile Application for Education and Monitoring:  Develop a mobile application that serves as an educational tool and allows campers to log their waste disposal activities.\n\n"
                                "3. Partnership with Outdoor Recreation Organizations:  Collaborate with outdoor recreation organizations to expand educational efforts and promote responsible camping practices.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your ingenious strategy to implement an incentive-based reward system has worked wonders. Campers were motivated by the prospect of discounts on future reservations, recognition on the leaderboard, and exclusive access to certain areas. The positive reinforcement created a ripple effect, fostering a sense of camaraderie and responsibility. As a result, compliance with the 'Pack-In, Pack-Out' policy soared, and Ethereal Springs is now a shining example of how incentives can inspire positive environmental behavior.";
                        } else if (ans == 2) {
                            cout << "Your decision to rely on technological tools had mixed results. While the mobile app proved effective for many campers, some faced challenges in adopting or using the technology. This digital-focused approach left a portion of the camping community without access to crucial waste disposal guidance. The final challenge remains unmet, and the destiny of Ethereal Springs hangs in the balance.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic partnership with outdoor recreation organizations has brought about a transformative change in Ethereal Springs. Collaborative efforts led to widespread educational programs, well-organized clean-up events, and enhanced waste disposal facilities. The camping community, influenced by the expertise and passion of these organizations, embraced the 'Pack-In, Pack-Out' policy. Ethereal Springs now thrives as a harmonious blend of nature preservation and community engagement, exemplifying the positive impact of collaboration.";
                        }
                    } else if (choice == 2) {
                        system("CLS");
                        cout << "The character, opting for a strict enforcement approach, implements fines for non-compliance with Leave No Trace principles. Collaborating with local authorities and "
                        "park rangers, they roll out a comprehensive system to regulate camper behavior and waste disposal practices within the camping site.\n\n";
                        cout << "*POSITIVE EFFECT*: Improved Compliance The impact is immediate and positive. The threat of fines serves as a strong deterrent, compelling campers to adhere to Leave No "
                        "Trace principles diligently. As a result, improper waste disposal practices diminish significantly, leading to a cleaner and more environmentally sustainable camping area.\n\n";
                        cout << "*NEGATIVE EFFECT*: Tension and Backlash However, not all campers welcome the imposition of fines. Some view it as punitive and express resistance, leading to tensions "
                        "between campers and enforcement authorities. Additionally, concerns are raised about the economic impact on the local tourism industry, as fines may discourage some visitors. "
                        "The character faces the challenge of managing this backlash while emphasizing the long-term environmental benefits of the enforcement measures. Striking a balance between "
                        "conservation goals and addressing economic concerns becomes a complex task that requires careful navigation.\n\n";
                        cout << "\"In  response to the negative effects of this option\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Community Engagement and Collaboration:  Foster open communication and collaboration between enforcement authorities, local businesses, and the camping community. Host town hall meetings, workshops, and forums to address concerns and gather feedback.\n\n"
                                "2. Economic Incentives for Environmental Stewardship:  Implement a system of economic incentives for campers and local businesses that actively contribute to environmental stewardship. This could include discounts for responsible campers, certification programs for eco-friendly businesses, or grants for local initiatives promoting sustainable tourism.\n\n"
                                "3. Educational Campaign with Alternatives to Fines:  Shift the focus from punitive measures to a comprehensive educational campaign that highlights the importance of Leave No Trace principles and the long-term benefits of conservation.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your commitment to fostering a sense of community engagement and collaboration has paid off. By establishing a volunteer program, you successfully tapped into the collective enthusiasm of campers and local environmental enthusiasts. These dedicated volunteers actively engaged with fellow campers, organizing clean-up events and providing guidance on responsible waste disposal. The camping community rallied together, creating a positive and sustainable environment at Ethereal Springs. Your strategic approach not only addressed the challenge but also left a lasting legacy of environmental stewardship.";
                        } else if (ans == 2) {
                            cout << "Your decision to implement economic incentives faced challenges in execution. While some campers were enticed by the rewards, others remained indifferent or resistant to the idea. The effectiveness of the incentive program varied, and the desired widespread compliance was not achieved. As a result, certain areas of the camping site continue to grapple with the negative consequences of non-compliance. The fate of Ethereal Springs hangs in the balance, underscoring the delicate balance between economic incentives and the diverse motivations of the camping community.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to organize an educational campaign, you successfully combined the power of clear signage with an expansive reach through various media channels. The educational campaigns proved effective in increasing awareness among campers about the 'Pack-In, Pack-Out' policy and provided alternatives to fines. Campers embraced the responsibility, making informed choices that aligned with Leave No Trace principles. The camping site now exudes a sense of environmental consciousness, with campers actively participating in preserving the natural beauty of Ethereal Springs.";
                        }
                    } else if (choice == 3) {
                        system("CLS");
                        cout << "The character, recognizing the importance of community involvement, opts for the Community Volunteer Program. They work to establish a network of enthusiastic volunteers "
                        "who actively engage with fellow campers, spreading awareness about Leave No Trace principles and organizing clean-up events to maintain the camping site's environmental integrity.\n\n";
                        cout << "*POSITIVE EFFECT*: Community-driven Stewardship The impact is positive and community-driven. The volunteer program gains momentum, and campers actively participate in educational "
                        "initiatives and clean-up events. A sense of shared responsibility flourishes, fostering a sustainable camping culture. Campers become more mindful of their impact, leading to improved waste "
                        "disposal practices and a positive transformation of the camping site.\n";
                        cout << "*NEGATIVE EFFECT*: Volunteer Reliability Challenges arise as the success of the program relies on the availability and willingness of volunteers. Some campers, despite the community-driven "
                        "approach, may still neglect responsible practices. The program's effectiveness may vary depending on the level of engagement within the community, and sustaining long-term commitment from volunteers "
                        "becomes a key challenge for the character to address in their quest for a cleaner camping environment.\n\n";
                        cout << "\"In  response to the negative effects of this option\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Incentive Program for Volunteers:  Implement an incentive program to encourage volunteer participation and reliability. Provide recognition, certificates, or small rewards for volunteers "
                                "who consistently contribute to the community-driven initiative.\n\n"
                                "2. Diversify Volunteer Engagement:  Broaden the types of volunteer opportunities within the camping community. Instead of focusing solely on waste management, create diverse roles such as trail "
                                "maintenance, educational outreach, and event coordination.\n\n"
                                "3. Collaborate with Local Organizations:  Forge partnerships with local environmental organizations or schools to bring in additional support for the community-driven initiative.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "Despite your best intentions, the incentive program for volunteers faced some challenges. While a portion of campers eagerly embraced the opportunity to earn rewards, others remained indifferent to the program or found it insufficiently motivating. This resulted in a fragmented volunteer effort, with only a subset of campers actively participating in waste disposal initiatives. The effectiveness of the 'Pack-In, Pack-Out' policy is hindered, and conflicts with non-participating campers persist, leaving Ethereal Springs in a precarious environmental state.";
                        } else if (ans == 2) {
                            cout << "***CONGRATULATIONS!*** Your decision to diversify volunteer engagement strategies has paid off brilliantly. By recognizing and accommodating varying preferences and skill sets, you created a dynamic team of volunteers with a shared commitment to environmental stewardship. The camping site now benefits from a range of initiatives, from educational workshops to hands-on cleanup events. The diverse approaches have fostered a sense of community responsibility, resulting in widespread compliance with the 'Pack-In, Pack-Out' policy and a visibly improved Ethereal Springs.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic collaboration with local organizations has proven to be a game-changer. The combined efforts of the camping community and external entities have significantly enhanced the success of the 'Pack-In, Pack-Out' policy. Local organizations brought valuable resources, expertise, and additional manpower to the table, creating a powerful alliance for environmental conservation. Ethereal Springs now stands as a shining example of successful collaboration, with improved waste management practices and a thriving ecosystem.";
                        }
                    }
                }
                // LACK OF DESIGNATED
                case 3: {
                    system("CLS");
                    cout << "LACK OF DESIGNATED WASTE DISPOSAL AREAS: How will you proceed?\n";
                    cout << "Options:\n";
                    cout << "1. ESTABLISH CLEAR SIGNAGE FOR WASTE DISPOSAL AREAS\n"
                            "Description: Install clear and visible signage indicating designated waste disposal areas within the camping site. These signs should be strategically placed at key points, such as trailheads and camping zones, to guide campers to proper disposal sites.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Clear signage enhances visibility, making it easier for campers to locate and use designated waste disposal areas. This leads to improved waste management practices and a reduction in litter.\n"
                            "Negative: Despite signage, some campers may still overlook or disregard the information. This could result in continued improper waste disposal and potential environmental impact.\n";
                    cout << "2. DEPLOY RANGER PATROLS TO GUIDE CAMPERS\n"
                            "Description: Deploy ranger patrols within the camping site to actively guide and educate campers on proper waste disposal practices. Rangers can provide real-time assistance, answer questions, and ensure that campers are aware of and utilize designated waste disposal areas.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Ranger patrols actively engage with campers, offering immediate guidance on waste disposal. This hands-on approach can lead to increased compliance and a positive shift in camper behavior.\n"
                            "Negative: Despite ranger efforts, some campers may still neglect proper waste disposal practices. The success of this option relies on the availability of ranger resources and their ability to cover the entire camping area effectively.\n";
                    cout << "3. INTRODUCE INTERACTIVE EDUCATIONAL WORKSHOPS\n"
                            "Description: Organize interactive educational workshops within the camping site, focusing on the importance of proper waste disposal. These workshops can include demonstrations, discussions, and hands-on activities to actively involve campers in learning about and practicing responsible waste management.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Interactive workshops provide a more engaging learning experience, increasing camper understanding of the significance of proper waste disposal. This can lead to improved compliance and a positive impact on the environment.\n"
                            "Negative: Interactive workshops provide a more engaging learning experience, increasing camper understanding of the significance of proper waste disposal. This can lead to improved compliance and a positive impact on the environment.\n\n";
                    cout << ">> Enter choice: ";
                    cin >> choice;
                    if (choice == 1) {
                        system("CLS");
                        cout << "The character opts for the installation of clear signage to address the issue of improper waste disposal. They strategically place these signs at key points like trailheads and camping zones, aiming to guide campers to designated waste disposal areas.\n\n";
                        cout << "*POSITIVE EFFECT*: Cleaner Camping Site The impact is positive and noticeable. The clear signage enhances visibility, making it easier for campers to locate and utilize designated waste disposal areas. As a result, there is a visible reduction in litter, and campers increasingly adopt improved waste management practices. The camping site begins to regain its natural beauty as the environmental impact diminishes.\n\n";
                        cout << "*NEGATIVE EFFECT*: Limited Awareness Despite the signage, some campers may still overlook or disregard the information. A portion of campers may continue with improper waste disposal practices, posing a potential risk to the environment. The challenge lies in ensuring that the signage effectively reaches and influences the behavior of all campers, addressing the issue comprehensively.\n\n";
                        cout << "\"In response to the challenged of some campers still continuing with improper waste disposal caused by limited awareness, How will you proceed?\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Organize Educational Campaigns:  Launch extensive educational campaigns to complement the clear signage strategy.\n\n"
                                "2. Implement Mobile App for Guidance:   Develop a dedicated mobile app that provides real-time guidance on waste disposal within the camping site. Campers can use the app to locate designated disposal areas, receive notifications, and access additional information on responsible waste management.\n\n"
                                "3. Establish Waste Management Ambassadors:   Recruit and train waste management ambassadors who actively patrol the camping site to engage with campers.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to organize educational campaigns, you successfully combined the power of clear signage with an expansive reach through various media channels. The educational campaigns proved effective in increasing awareness among campers about the designated waste disposal areas. This synergistic approach resulted in a cleaner camping site, showcasing a harmonious balance between environmental education and visual cues.";
                        } else if (ans == 2) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to implement a mobile app for guidance, you successfully embraced technology to enhance the impact of clear signage. The app provided a convenient and interactive solution, catering to diverse camper preferences. Campers readily adopted the technology, leading to increased adherence to proper waste disposal practices. The camping site now stands as a testament to the successful fusion of traditional signage with innovative digital solutions.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to establish waste management ambassadors alongside clear signage, you introduced a personal touch to waste disposal guidance. These ambassadors, through personalized interactions, provided direct assistance to campers, ensuring a better understanding of waste disposal guidelines. This human-centric approach led to a cleaner camping site, and campers embraced improved waste management practices.";
                        }
                    } else if (choice == 2) {
                        system("CLS");
                        cout << "The character chose to deploy ranger patrols within the camping site to educate campers on proper waste disposal practices. These rangers become the frontline in ensuring campers are aware of designated waste disposal areas and adhere to responsible waste management.\n\n";
                        cout << "*POSITIVE EFFECT*: Improved Compliance The impact is positive and tangible. Ranger patrols actively engage with campers, offering real-time guidance and support. Campers, appreciating the hands-on assistance, increasingly adopt proper waste disposal practices. This results in a visible reduction of litter and a more environmentally conscious camping community.\n\n";
                        cout << "*NEGATIVE EFFECT*: Resource Limitations. However, despite the ranger patrols' efforts, some campers may still neglect proper waste disposal practices. The success of this option heavily relies on the availability of ranger resources and their ability to cover the entire camping area effectively. Balancing the demands of patrolling with other ranger responsibilities may pose challenges and limit the overall reach of this initiative.\n\n";
                        cout << "\"In response to the limitation in resource problems that heavily affects the success of the chosen option, How will you proceed?\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Establish Education Centers: Set up designated Camper Education Centers within the camping site where ranger patrols can provide in-depth, personalized education on proper waste disposal practices.\n\n"
                                "2. Utilize Technological Tools: Equip ranger patrols with technological tools such as mobile apps or tablets that provide real-time information on waste disposal guidelines and designated areas.\n\n"
                                "3. Collaborate with Local Schools and Groups: Form partnerships with local schools or community groups to organize educational programs on responsible waste disposal\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to establish education centers, you created dedicated hubs for disseminating information on responsible waste management. These centers became focal points for engaging campers, offering hands-on demonstrations, workshops, and informative materials. The comprehensive approach led to increased awareness and understanding, resulting in a significant reduction in litter and a cleaner camping site.";
                        } else if (ans == 2) {
                            cout << "Your decision to rely on technological tools had mixed results. While the mobile app proved effective for many campers, some faced challenges in adopting or using the technology. This digital-focused approach left a portion of the camping community without access to crucial waste disposal guidance. The final challenge remains unmet, and the destiny of Ethereal Springs hangs in the balance.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to collaborate with local schools and groups, you tapped into existing community networks to spread awareness about responsible waste management. Workshops and educational initiatives conducted through schools and community groups reached a diverse audience. This inclusive approach fostered a shared sense of responsibility, resulting in improved waste disposal practices and a cleaner camping site.";
                        }
                    } else if (choice == 3) {
                        system("CLS");
                        cout << "The character chose the path of interactive educational workshops. Collaborating with environmental educators and local experts, they organize engaging sessions within the camping site to enlighten campers about responsible waste management.";
                        cout << "*POSITIVE EFFECT*: Campers actively participate in the interactive workshops, gaining a deeper understanding of the consequences of improper waste disposal. Equipped with this knowledge, they become advocates for responsible practices, actively promoting a cleaner and healthier camping environment.\n\n";
                        cout << "*NEGATIVE EFFECT*: However, not all campers attend the workshops, and the message may not reach everyone. Some may continue with old habits due to lack of awareness or disinterest. The challenge lies in ensuring that the educational initiatives reach a broader audience to maximize their positive impact on waste disposal practices within the camping site.\n\n";
                        cout << "\"In response to the campers' indifference, How will you proceed?\"";
                        cout << "How will you proceed?\n";
                        cout << "1. Create Engaging Digital Content: Develop interactive and engaging digital content, such as online workshops, videos, or an educational app, to complement the on-site workshops.\n\n"
                                "2. Establish Community Ambassadors:  Identify and empower passionate and responsible campers from within the community to act as ambassadors.\n\n"
                                "3. Incentive-based Participation:  Incentives aim to motivate campers to attend workshops and actively engage in responsible waste management practices.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "Your decision to rely solely on digital content did not prove optimal. Some campers, particularly those with limited access to digital devices or the internet, were left without access to crucial educational materials. This digital-focused strategy overlooked the diverse needs of the camping community, leading to a missed opportunity to engage a portion of the camper population. The final challenge remains unmet, and the fate of Ethereal Springs hangs in the balance.";
                        } else if (ans == 2) {
                            cout << "Your decision to rely on community ambassadors had limited success. While some campers responded positively to peer-led initiatives, others remained indifferent or resistant to guidance from their peers. The effectiveness of this approach was contingent on the ambassadors' ability to influence their peers, and in some cases, this influence was not sufficient to create widespread change. The final challenge remains unmet, and the fate of Ethereal Springs hangs in the balance.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to encourage participation through incentives, you successfully motivated campers to actively engage in the educational workshops. The promise of rewards, such as discounts on future camping permits or exclusive access, led to increased attendance and enthusiastic participation. This heightened engagement translated into a more informed and responsible camping community, contributing to a cleaner and healthier camping environment.";
                        }
                    } else {
                        cout << "Invalid answer.";
                    }
                }
            }
        }
        case 3: {
            system("CLS");
            cout << "You have chosen WATER RESOURCE DEGRADATION. Which specific problem would you like to address?\n";
            cout << "Options: \n";
            cout << "1. ALTERED MICROBIAL BALANCE: soap and detergent residues from campers' cleaning activities upset the "
            "natural microbial balance of the springs. The once-pristine water, teeming with beneficial microorganisms, is now "
            "affected by the introduction of foreign substances, leading to a decline in water quality.\n\n";
            cout << "2. EROSION AND RUNOFF: Campsite development and the trampling of vegetation contribute to increased erosion. "
            "Sediments from disturbed soil find their way into the streams, clouding the waters and further diminishing the visual appeal of the once-luminous springs.\n\n";
            cout << "3. COMMUNITY CONCERNS: Indigenous communities, who have long regarded the Ethereal Springs as sacred, express deep concerns about the contamination. "
            "The spiritual and cultural significance of the waters is jeopardized, prompting a call for urgent action to restore the sanctity of this revered site.\n";
            cout << ">> Enter choice: ";
            cin >> choice;
            switch (choice) {
                // ALTERED
                case 1: {
                    system("CLS");
                    cout << "ALTERED MICROBIAL BALANCE: How will you proceed?\n";
                    cout << "Option: \n";
                    cout << "1. REGULATION AND ENFORCEMENT\n"
                            "Description: Advocate for and enforce strict regulations on the number of visitors, waste disposal, and camping practices. Work with local authorities "
                            "to monitor and penalize violators.\n"
                            "CONSEQUENCES: \n"
                            "Positive: Immediate reduction in human impact, potential restoration of microbial balance. \n"
                            "Negative: Backlash from the tourism industry, potential conflicts with non-compliant campers.\n\n";
                    cout << "2. EDUCATIONAL CAMPAIGN\n"
                            "Description: Launch an educational campaign within the game, using your game character to raise awareness about the importance of water quality.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Increased player awareness, potential real-world application of eco-friendly practices."
                            "Negative: Slow impact, may not address immediaate concerns.\n";
                    cout << "3. ECO-FRIENDLY CLEANING ALTERNATIVES\n\n"
                            "Description: Introduce eco-friendly cleaning alternatives and provide them to campers. Biodegradable soaps and detergents are distributed, promoting responsible cleaning practices.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Campers adopt eco-friendly alternatives, leading to a reduction in harmful residues and a potential restoration of microbial balance.\n"
                            "Negative: Initial resistance from some campers who are accustomed to traditional cleaning products.\n\n";
                    cout << ">> Enter choice: ";
                    cin >> choice;
                if (choice == 1) {
                    system("CLS");
                    cout << "The character chose the path of REGULATION AND ENFORCEMENT. Collaborating with local authorities, they implement strict regulations governing visitor "
                    "conduct, waste disposal, and camping practices near sacred waters.\n\n";
                    cout << "*POSITIVE EFFECT*: Immediate Restoration\n"
                    "The impact is swift and substantial. Stringent regulations deter harmful activities, ensuring campers adhere to "
                    "guidelines. This leads to a rapid restoration of the altered microbial balance, and the once-clouded waters regain their pristine clarity.\n\n";
                    cout << "*NEGATIVE EFFECT*: Turmoil and Resistance\n"
                    "However, not everyone welcomes the new regulations. The tourism industry reacts with backlash, expressing concerns "
                    "about economic impacts. Non-compliant campers resist the changes, leading to conflicts with enforcement authorities. Balancing conservation with economic interests "
                    "becomes a contentious issue, introducing challenges that must be navigated.\n\n";
                    cout << "\"In response to the turmoil and resistance, you decide to engage in diplomatic efforts to address concerns and gain support.\"\n\n";
                    cout << "How will you proceed?\n";
                    cout << "1. Conduct Public Forums: Organize public forums to listen to concerns and openly discuss the benefits of regulations.\n\n"
                            "2. Collaborate with Tourism Industry: Initiate dialogue with tourism stakeholders to find a common ground and address their concerns.\n\n"
                            "3. Ignore Criticisms and Escalate Enforcement: Disregard concerns and decide to escalate enforcement, intensifying penalties for non-compliance.\n\n";
                    cout << ">> Enter answer: ";
                    cin >> ans;
                    if (ans == 1) {
                        cout << "Your choice to conduct public forums did not prove optimal. Focusing solely on public opinions missed addressing crucial concerns of the tourism industry."
                        "Unfortunately, this decision means the final challenge remains unmet. Consider your options carefully, for the fate of Ethereal Springs hangs in the balance.";
                    } if (ans == 2) {
                        cout << "***CONGRATULATIONS!*** Your strategic brilliance has shone brightly in the final challenge. By choosing to collaborate with the tourism industry, you "
                        "demonstrated a masterful balance of leadership and diplomacy.\n\n"
                        "The public forums became a platform for open dialogue, where concerns were addressed, and alliances were forged. Your ability to listen, understand, and find "
                        "common ground resonated with both campers and the tourism industry.\n\n"
                        "As a result, the enforcement measures have been implemented smoothly, backed by the understanding and support of the tourism stakeholders. The sacred waters "
                        "are now under the guardianship of a harmonious balance between conservation and responsible tourism.";
                    } if (ans == 3) {
                        cout << "Your decision to ignore criticisms and escalate enforcement is not the optimal strategy. This unilateral approach risks exacerbating conflicts, leading "
                        "to increased resistance, potential legal challenges, and strained relationships with the tourism industry. The failure to acknowledge and address legitimate "
                        "concerns means the final challenge remains unmet. Your journey, though reaching up to this point, faces a setback. Choose your next steps wisely, for the destiny "
                        "of Ethereal Springs hangs in the balance.";
                    }
                } else if (choice == 2) {
                    system("CLS");
                    cout << "The Character opted for an EDUCATIONAL CAMPAIGN within the game. Utilizing your in-game character, you embark on a journey to raise awareness about the "
                    "crucial importance of water quality.\n\n";
                    cout << "*POSITIVE EFFECT*: Seeds of Awareness\n"
                    "The educational campaign proves impactful as players engage deeply with the narrative. Your character's journey resonates, leading to "
                    "increased player awareness about the delicate balance of water ecosystems. The knowledge gained from the game has the potential to influence real-world behavior, "
                    "encouraging eco-friendly practices and a heightened sense of responsibility.\n\n"
                    "*NEGATIVE EFFECT*: The Lingering Tide\n"
                    "However, the impact is gradual, and the urgency of the altered microbial balance may not be immediately addressed. The slow pace of change may allow ongoing "
                    "environmental concerns to persist, as the game's educational influence takes time to manifest into tangible actions.\n\n";
                    cout << "\"In response to the slow pace of change, you decide to do something to accelerate Educational Impact.\"\n\n";
                    cout << "How will you proceed?\n";
                    cout << "1. Low-Cost Awareness Drive: Generic Flyer Distribution: Distributing generic, uninspiring flyers. These flyers, though easily produced and distributed, "
                    "lack engaging visuals and compelling content.\n\n"
                    "2. Social Media Awareness Campaign: Launch a social media challenge encouraging players and their networks to share their eco-friendly practices using a designated hashtag.\n\n"
                    "3. Local Partnerships: Collaboration with Environmental Organizations: This can include tree planting, clean-up drives, or educational sessions, providing tangible actions aligned with the game's educational goals.\n\n";
                    cout << ">> Enter answer: ";
                    cin >> ans;

                    if(ans == 1) {
                        cout << "Your decision to rely on a Low-Cost Awareness Drive through generic flyer distribution did not prove optimal. The lack of depth and engagement in the distributed flyers has resulted in limited impact on player behavior. The urgency of the issue may not have been effectively conveyed.\n\n"
                        "Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag's water sources still hangs in the balance, and the journey is not yet complete.";
                    } else if (ans == 2) {
                        cout << "Your decision to rely on a Social Media Awareness Campaign did not prove to be the most effective strategy. While it raised awareness in the virtual realm, the impact on tangible actions may be limited. Awareness on social media may not directly translate into the hands-on, impactful approach needed. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag's water sources still hangs in the balance, and the journey is not yet complete."
                    ;} else if (ans == 3) {
                        cout << "***CONGRATULATIONS!*** Your wise choice to forge Local Partnerships and collaborate with Environmental Organizations has proven to be the catalyst for success in the final challenge. Through tree planting, clean-up drives, and educational sessions, you've seamlessly integrated real-world, tangible actions with the game's educational goals.\n\n"
                        "Your strategic collaboration has not only heightened player engagement but has also led to a direct, positive impact on addressing the altered microbial balance. The mountain's water sources are now on the path to restoration, thanks to your commitment to environmental stewardship.\n\n"
                        "By choosing this path, you've successfully passed the final challenge. The ecosystem and fellow players alike commend your dedication and foresight in bringing about positive change. Well done!";
                    }
                    } else if (choice == 3) {
                    system("CLS");
                        cout << "The Character chose to introduce ECO-FRIENDLY CLEANING ALTERNATIVES for campers. Biodegradable soaps and detergents are distributed, promoting responsible cleaning practices.\n\n"
                        "*POSITIVE EFFECT*: Campsite Renewal\n"
                        " Campers embrace the eco-friendly alternatives, resulting in a significant reduction in harmful residues. The introduction of biodegradable cleaning products contributes to the potential restoration of the altered microbial balance. The once-affected water sources begin to show signs of renewal, with clarity returning to the once-clouded springs.\n\n"
                        "*NEGATIVE EFFECT*: Resistance\n"
                        "Ripples However, not all campers readily accept the shift to eco-friendly alternatives. Initial resistance arises from those accustomed to traditional cleaning products. Some campers express skepticism or discomfort with the change, creating a ripple of resistance within the camping community.\n\n";
                        cout << "In response to the resistance you've encountered, which path would you like to take?\n\n";
                        cout << "How will you proceed?\n";
                        "1. Community Leaders Endorsement: Support from Influential Figures: Leverage their influence to encourage campers to adopt the new practices."
                        "2. Gradual Transition: Phased Implementation: Gradually introducing eco-friendly alternatives while providing ample time for campers to adjust. Communicate the benefits and reasons behind the change to ease the transition."
                        "3. Cosmetic Rebranding: The labels and packaging are redesigned to give the appearance of eco-friendliness, aiming to create a positive image.";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if(ans == 1) {
                            cout << "Your choice to seek Community Leaders' Endorsement for support did not prove to be the most effective strategy. While leveraging influential figures can be beneficial, it may not universally address the concerns of all campers. The impact varies based on the authority and credibility of the endorsing figures, and relying solely on endorsements may not address individual camper concerns. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag's water sources still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 2) {
                            cout << "***CONGRATULATIONS!*** Your strategic choice of implementing a Gradual Transition with Phased Implementation has proven to be the key to success in the final challenge. By gradually introducing eco-friendly alternatives and providing campers with ample time to adjust, you've demonstrated foresight and consideration for their needs.\n\n"
                                    "Clear communication about the benefits and reasons behind the change has fostered understanding among campers. Your commitment to a smoother transition has minimized resistance, allowing campers to adapt gradually to the eco-friendly alternatives.\n\n"
                                    "As a result of your wise decision, the campsite is now renewed, and the shift to eco-friendly practices but has set a precedent for a more sustainable and eco-conscious camping community.";
                        } else if (ans == 3) {
                            cout << "Your decision to rely on Cosmetic Rebranding did not prove to be the most effective strategy. The deceptive nature of this approach may lead to disappointment and mistrust among campers. The lack of genuine change undermines the credibility of environmental initiatives, and the revelation of the true nature of the rebranding may result in increased resistance. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag’s water sources still hangs in the balance, and the journey is not yet complete.";
                        }
                    }
                else {
                        cout << "Invalid answer.";
                    }
                }
                // EROSION
                case 2: {
                    system("CLS");
                    cout << "EROSION AND RUNOFF: How will you proceed?\n";
                    cout << "Option 1:\n";
                    cout << "1. INTRODUCING REFORESTATION PROJECTS\n"
                            "Description: Introduce reforestation projects to protect vulnerable areas. Planting initiatives are implemented to restore and protect the vegetation.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Reforestation projects contribute to the restoration of the landscape.\n"
                            "Negative: Resistance from campers and potential conflicts with those who oppose the changes.\n\n";
                    cout << "2. CREATING INFORMATIONAL MATERIALS\n"
                            "Description: Create informational materials to distribute to campers. Flyers and signage are placed around the site to inform visitors about the importance of preserving the natural landscape.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Increased awareness leads to a gradual change in camper behavior, contributing to the restoration of the landscape.\n"
                            "Negative: Some campers may ignore or disregard the informational materials, and the impact on the environment persists.\n\n";
                    cout << "3. COLLABORATING WITH LOCAL AUTHORITIES\n"
                            "Description: Collaborate with local authorities to establish and enforce strict regulations on visitors, waste disposal, and camping practices. The regulations are implemented, and penalties are enforced for violators.\n"
                            "CONSEQUENCES:\n"
                            "Positive:  Immediate reduction in human impact, potential restoration of the landscape.\n"
                            "Negative: Backlash from the tourism industry, potential conflicts with non-compliant campers.\n\n";
                    cout << ">> Enter answer: ";
                    cin >> choice;
                    if (choice == 1) {
                    system("CLS");
                        cout << "The Character chose to INTRODUCING REFORESTATION PROJECTS. This strategic move aims to protect vulnerable areas by implementing planting initiatives that restore and safeguard the essential vegetation.\n\n";
                        cout << "Positive: The positive impact of the reforestation projects is significant. The restoration of the landscape begins as newly planted trees take root, preventing further erosion and runoff. The mountain environment, once under threat, starts to rejuvenate, bringing back its natural beauty.\n\n";
                        cout << "Negative: However, not all campers are welcoming this change. Resistance brews among those who oppose the alterations to their familiar surroundings. Potential conflicts arise as opposing viewpoints clash, creating tension within the camping community.\n\n";
                        cout << "\"Faced with resistance and potential conflicts, how would you navigate this challenge? Your choices could influence the success of the reforestation projects and the overall harmony within the campsite. Consider your options carefully.\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Engage in Open Dialogue: Initiate open discussions with campers to address concerns and explain the importance of reforestation. Seek common ground and understanding.\n\n"
                                "2. Implement Stricter Enforcement: Enforce the reforestation projects with stricter measures to suppress resistance. Use penalties for non-compliance.\n\n"
                                "3. Greenwashing Campaign: Launch a Greenwashing Campaign that portrays the reforestation projects as a purely aesthetic enhancement, highlighting the beauty of the added greenery without addressing the environmental benefits.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if(ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your wise decision to Engage in Open Dialogue has proven to be a pivotal strategy in addressing resistance to the reforestation projects. By initiating open discussions, you demonstrated transparency, addressing concerns, and explaining the critical importance of reforestation. This approach fostered understanding and allowed campers to see the broader ecological benefits. The mountain ecosystem is now on a path to restoration, and the harmony within the campsite has been preserved.\n\n"
                                    "You've successfully passed the final challenge, leaving a positive impact on both the environment and the camping community. Well done!";
                        } else if (ans == 2) {
                            cout << "***CONGRATULATIONS!*** Your strategic decision to Implement Stricter Enforcement has effectively suppressed resistance and ensured compliance with the reforestation projects. Through penalties for non-compliance, you established the importance of these initiatives and discouraged actions that could harm the environment.\n\n"
                                    "Your firm but fair approach has led to immediate adherence to the reforestation projects, securing the future of the mountain's water sources. By maintaining a delicate balance between enforcement and open communication, you've successfully passed the final challenge, leading a path toward ecological rejuvenation. Well done!";
                        } else if (ans == 3) {
                            cout << "Your choice to rely on a Greenwashing Campaign did not prove to be the most effective strategy. While it may have initially garnered positive reception based on perceived aesthetic improvements, the deceptive nature of the campaign is counterproductive. The lack of genuine environmental impact has led to disappointment, mistrust, and conflicts among campers. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag's water sources still hangs in the balance, and the journey is not yet complete.";
                        }
                    } else if (choice == 2) {
                    system("CLS");
                        cout << "The Character chose CREATING INFORMATIONAL MATERIALS. Flyers and signage have been strategically placed around the campsite to inform visitors about the critical importance of preserving the natural landscape.\n\n";
                        cout << "Positive: The positive impact of this choice is substantial. Increased awareness among campers gradually leads to a change in behavior. As campers become more informed about the environmental significance, they contribute to the restoration of the landscape by adopting more sustainable practices.\n\n";
                        cout << "Negative: Despite the informational materials, some campers may choose to ignore or disregard the provided information. This resistance to change means that the impact on the environment persists, and not all campers are aligned with the conservation efforts.\n\n";
                        cout << "\"Faced with the challenge of some campers ignoring the informational materials, how would you navigate this situation? Your choices could influence the success of the awareness campaign and the overall impact on the mountain ecosystem. Consider your options carefully.\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Enhance Visibility: Optimize the placement and design of informational materials to enhance visibility and attract more attention. Consider using eye-catching graphics or interactive elements.\n\n"
                                "2. Personalized Outreach: Conduct personalized outreach efforts, such as one-on-one discussions or group meetings, to directly address concerns or questions raised by campers.\n\n"
                                "3. Token Eco-Friendly Initiatives: Introduce token eco-friendly initiatives that appear beneficial on the surface, such as small-scale tree plantings or recycling bins strategically placed around the campsite\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if(ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your strategic decision to Enhance Visibility has proven to be a game-changer in the final challenge. By optimizing the placement and design of informational materials, you successfully captured the attention of campers and made the educational content more noticeable and engaging.\n\n"
                                    "Eye-catching graphics and interactive elements have drawn campers' attention to the crucial information about preserving the natural landscape, contributing to increased awareness. You've successfully passed the final challenge, leaving a positive impact on both the environment and the camping community. Well done!";
                        } else if (ans == 2) {
                            cout << "Your choice to rely on Personalized Outreach, while valuable, proved to be resource-intensive and time-consuming. This approach, though impactful on an individual level, faced challenges in reaching a larger audience. In the context of addressing erosion and runoff, scalability became a limiting factor, making it challenging to ensure widespread awareness. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag's water sources still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 3) {
                            cout << "Your choice to introduce Token Eco-Friendly Initiatives, while initially appearing beneficial, fell short in addressing the root causes of erosion and runoff. These initiatives created a false sense of accomplishment among campers without fostering the broader behavioral changes and understanding needed for lasting impact. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag's water sources still hangs in the balance, and the journey is not yet complete.";
                        }
                    } else if (choice == 3) {
                    system("CLS");
                        cout << "The Character chose to COLLABORATING WITH LOCAL AUTHORITIES. This strategic move involves working with local officials to establish and enforce strict regulations on visitors, waste disposal, and camping practices. Penalties are enforced for those who violate these regulations.";
                        cout << "Positive: The collaboration with local authorities results in an immediate reduction in human impact on the sensitive ecosystem. Strict regulations contribute to the potential restoration of the landscape, addressing the issues of erosion and runoff more effectively.\n\n";
                        cout << "Negative: Despite the positive outcomes, there is a backlash from the tourism industry and potential conflicts with non-compliant campers who resist the new regulations. The delicate balance between conservation efforts and economic interests becomes a point of contention.\n\n";
                        cout << "\"Faced with backlash from the tourism industry and potential conflicts with non-compliant campers, how would you navigate this situation? Your choices could influence the success of the regulations and the overall harmony within the campsite. Consider your options carefully.\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Engage in Open Dialogue with Tourism Stakeholders: Initiate open discussions with representatives from the tourism industry to listen to concerns and discuss the benefits of the regulations.\n\n"
                                "2. Implement Compromise Measures: Explore compromise solutions that address the concerns of the tourism industry without compromising the integrity of the regulations.\n\n"
                                "3. Token Environmental Events: Organize events that showcase token environmental efforts, like tree-planting ceremonies or clean-up initiatives.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "Your choice to engage in Open Dialogue with Tourism Stakeholders, while aiming for a collaborative approach, may present challenges in achieving the desired outcomes. While open communication is crucial, relying solely on dialogue might not effectively address the urgency of erosion and runoff issues on Mount Pulag. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag’s water sources still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 2) {
                            cout << "***CONGRATULATIONS!*** Your strategic decision to Implement Compromise Measures has proven to be a game-changer in the final challenge. By exploring compromise solutions that address the concerns of the tourism industry without compromising the integrity of the regulations, you've successfully navigated a delicate balance.\n\n"
                                    " Developing adaptive policies have collectively contributed to a harmonious coexistence between environmental preservation and the thriving tourism industry. You've successfully passed the final challenge, leaving a positive impact on both the environment and the camping community. Well done!";
                        } else if (ans == 3) {
                            cout << "Your choice conduct Token Environmental Events, while seemingly positive, can create a superficial impression of progress without addressing the core issues causing erosion and runoff. These events may provide temporary relief but lack the substance needed for a sustainable impact on Mount Pulag's ecosystem. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Mount Pulag’s water sources still hangs in the balance, and the journey is not yet complete.";
                        }
                    }
                }
                // COMMUNITY
                case 3: {
                    system("CLS");
                    cout << "COMMUNITY CONCERNS: How will you proceed?\n";
                    cout << "Option: \n";
                    cout << "1. HOSTING CULTURAL EVENTS\n";
                            "Description: Host cultural events to reconnect visitors with the spiritual significance of Ethereal Springs. These events aim to foster a deeper understanding and respect for the Indigenous culture.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Increased appreciation for the spiritual significance, contributing to the restoration of the cultural sanctity.\n"
                            "Negative: Some visitors may remain indifferent, and the impact on the cultural sanctity persists.\n\n";
                    cout << "2. ESTABLISHING COMMUNITY PATROLS\n"
                            "Description: Establish community patrols to monitor and protect the sacred site. Indigenous community members actively engage in safeguarding the cultural sanctity of Ethereal Springs.\n"
                            "CONSEQUENCES:\n"
                            "Positive: The presence of community patrols deters harmful activities, contributing to the restoration of the cultural sanctity.\n"
                            "Negative: Potential conflicts with non-compliant campers who resist the increased monitoring.\n\n";
                    cout << "3. HOSTING GUIDED TOURS\n"
                            "Description: Host guided tours led by Indigenous community members. Visitors gain firsthand knowledge of the sacred nature of Ethereal Springs, fostering a deeper respect for the site.\n"
                            "CONSEQUENCES:\n"
                            "Positive: Increased appreciation for the spiritual significance, contributing to the restoration of the cultural sanctity.\n"
                            "Negative: Some visitors may remain indifferent, and the impact on the cultural sanctity persists.\n\n";
                    cout << ">> Enter choice: ";
                    cin >> choice;
                    if (choice == 1) {
                        system("CLS");
                        cout << "The Character chose to HOSTING CULTURAL EVENTS in an effort to reconnect visitors with the spiritual significance of Ethereal Springs reflects a thoughtful approach to addressing community concerns. By fostering a deeper understanding and respect for the Indigenous culture, you aim to restore the sanctity of the revered site.\n\n";
                        cout << "Positive: Cultural Appreciation: Hosting cultural events successfully increases appreciation for the spiritual significance of Ethereal Springs among visitors. This positive impact contributes to the restoration of the cultural sanctity of the site.\n\n";
                        cout << "Negative: Despite efforts, some visitors may remain indifferent to the cultural events, and the impact on the cultural sanctity persists. The challenge of restoring the spiritual significance of Ethereal Springs proves to be more complex than initially anticipated.\n\n";
                        cout << "\"Faced with backlash from the tourism industry and potential conflicts with non-compliant campers due to the cultural events, how would you navigate this situation? Your choices could influence the success of the restoration efforts and the overall harmony within the campsite. Consider your options carefully.\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Engage in Open Dialogue with Tourism Stakeholders: Initiate open discussions with representatives from the tourism industry to listen to concerns and discuss the benefits of the regulations.\n\n"
                                "2. Implement Strict Regulations on Visitor Activities: Enforce stringent regulations on visitor activities, including camping practices and waste disposal, to minimize the negative impact on the cultural sanctity of Ethereal Springs.\n\n"
                                "3. Ignore Community Concerns and Continue with Cultural Events: Ignore the concerns raised by Indigenous communities and continue hosting cultural events without making substantial changes to address the contamination issue.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if (ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your strategic decision to Engage in Open Dialogue with Tourism Stakeholders has proven to be a game-changer in the ongoing challenge. By fostering understanding and potential collaboration, you've paved the way for a more harmonious coexistence. This positive engagement contributes to the overall success of restoring the cultural sanctity of Ethereal Springs. Well done!";
                        } else if (ans == 2) {
                            cout << "Your choice, while seemingly positive, can create a superficial impression of progress without addressing the core issues causing erosion and runoff. These events may provide temporary relief but lack the substance needed for a sustainable impact on the cultural sanctity of Ethereal Springs. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Ethereal Springs' cultural sanctity still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 3) {
                            cout << "Your choice to ignore community concerns and continue hosting cultural events, while providing some short-term benefits, ultimately falls short in addressing the root issues raised by Indigenous communities. This decision, unfortunately, means the final challenge remains unmet. As you reflect on your progress, consider your options carefully. The fate of Ethereal Springs' cultural sanctity still hangs in the balance, and the journey is not yet complete.";
                        }
                    } else if (choice == 2) {
                        system("CLS");
                        cout << "The Character chose to ESTABLISHING COMMUNITY PATROLS to combat community concerns about the contamination of Ethereal Springs. Indigenous community members actively engage in safeguarding the cultural sanctity of the site.\n\n";
                        cout << "Positive: Effective Monitoring: The presence of community patrols proves highly effective in deterring harmful activities, contributing significantly to the restoration of the cultural sanctity.";
                        cout << "Negative: Conflicts with Non-Compliant Campers: The increased monitoring by community patrols may lead to potential conflicts with non-compliant campers who resist the intensified surveillance, creating tensions within the campsite.\n\n";
                        cout << "\"Faced with potential conflicts with non-compliant campers, how would you navigate this situation? Your choices could influence the success of the community patrols and the overall harmony within the campsite. Consider your options carefully.\n\n\"";
                        cout << "How will you proceed?\n";
                        cout << "1. Implement Strict Penalties for Non-Compliance: Enforce strict penalties for visitors who violate regulations, ensuring a strong deterrent against non-compliant camping practices.\n\n"
                                "2.  Engage in Open Dialogue with Non-Compliant Campers: Initiate open discussions with non-compliant campers to understand their concerns and foster a collaborative approach to address potential conflicts.\n\n"
                                "3.  Introduce Incentive Programs for Compliance: Implement incentive programs to encourage non-compliant campers to adhere to regulations, providing rewards for responsible camping practices.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if(ans == 1) {
                            cout << "Your choice to Implement Strict Penalties for Non-Compliance, while aiming to enforce regulations, presents challenges in effectively addressing potential conflicts within the campsite. There could be backlash from Tourism Industry: Strict penalties may lead to backlash from the tourism industry, particularly businesses dependent on tourism revenue, and Non-compliant campers may resist the strict penalties, potentially leading to conflicts with community patrols. Unfortunately, this decision means the final challenge remains unmet. As you reflect on your progress, consider your options carefully. The fate of Ethereal Springs' cultural sanctity still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 2) {
                            cout << "Your choice to engage in Open Dialogue with Non-Compliant Campers, while well-intentioned, presents challenges in effectively addressing potential conflicts within the campsite. Unfortunately, this decision means the final challenge remains unmet. As you reflect on your progress, consider your options carefully. The fate of Ethereal Springs' cultural sanctity still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 3) {
                            cout << "***CONGRATULATIONS!*** Your strategic decision to Introduce Incentive Programs for Compliance has proven to be a game-changer in the ongoing challenge. The positive reinforcement provided by incentives encourages non-compliant campers to adopt responsible practices, fostering a collaborative atmosphere within the campsite. Well done!";
                        }
                    } else if (choice == 3) {
                        system("CLS");
                        cout << "The Character chose to HOSTING GUIDED TOURS as a measure to combat community concerns about the contamination of Ethereal Springs. Indigenous community members lead these tours to provide visitors with firsthand knowledge of the sacred nature of the site.\n\n";
                        cout << "Positive: Increased Appreciation: Guided tours result in increased appreciation for the spiritual significance of Ethereal Springs, contributing to the restoration of the cultural sanctity\n";
                        cout << "Negative: Indifference from Some Visitors: Despite the guided tours, some visitors may remain indifferent, and the impact on the cultural sanctity persists.\n\n";
                        cout << "\"Faced with potential indifference from some visitors, how would you navigate this situation? Your choices could influence the success of the guided tours and the overall harmony within the campsite. Consider your options carefully.\"\n\n";
                        cout << "How will you proceed?\n";
                        cout << "1. Implement  Interactive Educational Exhibits: Introduce interactive exhibits at the site, providing additional educational materials that complement the guided tours and engage visitors more deeply in the cultural and spiritual significance of Ethereal Springs.\n\n"
                                "2. Collaborate with Indigenous Artists for Site Beautification: Engage Indigenous artists to create site-specific artwork that visually communicates the cultural and spiritual significance of Ethereal Springs, enhancing the overall experience for visitors.\n\n"
                                "3. Collaborate with Indigenous Artists for Site Beautification: Partner with travel bloggers to create online content that highlights the cultural and spiritual significance of Ethereal Springs, reaching a wider audience and encouraging visitors to engage in the guided tours.\n\n";
                        cout << ">> Enter answer: ";
                        cin >> ans;
                        if(ans == 1) {
                            cout << "***CONGRATULATIONS!*** Your strategic decision to Implement Interactive Educational Exhibits has proven to be a game-changer in the ongoing challenge. The enhanced engagement and complementary knowledge provided by these exhibits contribute significantly to the success of the guided tours. The delicate balance between conservation efforts and potential indifference from visitors is successfully maintained. Well done!";
                        } else if (ans == 2) {
                            cout << "Your choice to Collaborate with Indigenous Artists for Site Beautification, while artistically enriching, falls short in addressing the challenge of potential indifference from visitors. The varied response from visitors, coupled with resource allocation constraints, hinders the effectiveness of this strategy. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Ethereal Springs' cultural sanctity still hangs in the balance, and the journey is not yet complete.";
                        } else if (ans == 3) {
                            cout << "Your choice to Collaborate with Travel Bloggers for Online Promotion, while seeking increased visibility, encounters challenges in addressing potential indifference from visitors. The varied impact of travel bloggers and the limited influence on indifferent visitors hinder the effectiveness of this strategy. Regrettably, this outcome means the final challenge remains unmet. While you've reached up to this point, consider your options carefully. The fate of Ethereal Springs' cultural sanctity still hangs in the balance, and the journey is not yet complete.";
                        }
                    }
                }
            }
        }
    }
}
void MP1() {
    cout << charName << ": *" << charName << " was busy picking up the twigs for his bonfire, and was too late when he realized that he was going "
        "through the wrong pathway. Luckily he found a small hut nearby and noticed that there were people inside.*\n\n";
    sleep(2);
    cout << charName << ": Uhm, Excuse me my name is " << charName << "... it seems like I've accidentally deferred from my original trail and I seem to be lost, "
        "do you mind if I ask for your help?\n\n";
    sleep(2);
    cout << "Athena: Hello dear. My name is Athena and this is my husband Zeke.\n\n";
    sleep(2);
    cout << "Zeke: Hello there young lad. Well, you've come to the right place to ask for help. Me and my wife Athena have been living around this "
        "area for quite some time now and have knowledge of how to move around here.\n\n";
    sleep(2);
    cout << charName << ": That's good to hear from both of you; I'm quite lucky I found you.\n\n";
    sleep(2);
    cout << charName << ": *While walking with Zeke, " << charName << " saw a river that is turbid and asked Zeke about it.*\n\n";
    sleep(2);
    cout << "Zeke: I can't believe you actually noticed it; hikers who passed here recently seem to pay no attention to it at all.\n\n";
    sleep(2);
    cout << "Zeke: It used to be where we get our drinking water, but since soil from the higher part of the mountain has been constantly falling "
        "on the river, the water became dirty and undrinkable.\n\n";
    sleep(2);
    cout << charName << ": I have an idea, as a way of thanking you I can show you a simple and efficient way to filter water and instantly make "
        "it safe for consumption.\n\n";
    sleep(1);

    // CHALLENGE

    cout << "*** Challenge ***\n"
        "Scrambled Word: HLCOT RATTONIFLI\n";
    string resp;
    cout << "System: Write the correct answer: ";
    getline(cin, resp);

    for (auto &c : resp) {
        c = toupper(c);
    }

    if (resp == "CLOTH FILTRATION") {
        sleep(1);
        cout << "\nZeke: Alright then, I'll take your advice in mind, and we finished just in time for us to get you back to your trail.\n\n";
        sleep(2);
        cout << "Zeke: Good luck with the rest of your hike; come pay us a visit if you need help.\n\n";
        sleep(2);
        cout << charName << ": Thank you, Zeke! Please tell Athena I said thanks as well.";
        sleep(5);
    }
    else {
        cout << "Wrong! You did not get the correct answer.";
        sleep(5);
    }
}
void MP2() {
    system("CLS");
    int path;
    cout << charName << ": While hiking, " << charName << " encounters a fork in the trail. One path appears well-trodden, while the other is overgrown with vegetation\n\n";
    sleep(1);

    cout << "Option 1: Take the well-trodden path.\n"
            "Option 2: Venture through the overgrown path.\n"
            "Select Path: ";
            cin >> path;
    switch(path) {
        case 1: {
            system("CLS");
            cout << "You chose Option 1: Take the well-trodden path.\n\n";
            cout << charName << ": *Choosing the well-trodden path, " << charName << " encounters a group of fellow hikers having a hard time finding "
            "their way through the overgrown path. " << charName << " decided to approach them to help them since he'll be using the same path as well.*\n\n";
            sleep(2);
            cout << charName << ": Uhm, excuse me. Can I help you out? You seem to be having a hard time. My name is " << charName << ".\n\n";
            sleep(2);
            cout << "Zulu: Hello, my name is Zulu and this is my sister Venus.\n\n";
            sleep(2);
            cout << "Venus: Hi, nice to meet you. We would be glad to accept your offer.\n\n";
            sleep(2);
            cout << charName << ": How long have you been stranded here?\n\n";
            sleep(2);
            cout << "Zulu: Not too long, we actually just got here too as well.\n\n";
            sleep(2);
            cout << charName << ": I'm glad to hear that, by the way, I have some knives we can use to cut off some grass, we can use it to clear our path easier.\n\n";

            // CHALLENGE

            int ans, crans;
            cout << "*** Challenge ***\n"
                "Solve for the answer: 280/280 = ?\n"
                "Answer: ";
            cin >> ans;
            crans = 1;

            if (ans == crans) {
                cout << "Solve for the answer: 15^2 = ?\n"
                    "Answer: ";
                cin >> ans;
                crans = 225;
            }

            if (ans == crans) {
                cout << charName << ": Choosing to assist." << flush;
                sleep(1);
                cout << "\r" << charName << ": Choosing to assist.." << flush;
                sleep(1);
                cout << "\r" << charName << ": Choosing to assist..." << flush;
                sleep(1);
                cout << "\r" << charName << ": Successfully helps the hikers navigate the difficult terrain.\n\n";
                sleep(1);
                cout << "Azur: Well done! Your kindness has earned you camaraderie with fellow hikers.\n\n";
                sleep(5);
            } else {
                cout << "Game Over!";
                cin.get(); // Wait for a key press
                sleep(5);
            }
        }
    }
}
void MP3() {

    system("CLS");
    int ans;
    cout << charName << ": *Continuing the hike " << charName << "encounters a sudden change in weather, and dark clouds gather overhead.*\n\n";
    cout << "Option 1: Find shelter and wait for the weather to clear.\n"
            "Option 2: Press on despite the weather.\n"
            << charName << ": What's the best course of action?: ";
            cin >> ans;
    switch(ans) {
        case 1: {
            string resp;
            cout << "\n\n";
            cout << charName << ": Seeking shelter." << flush;
            sleep(1);
            cout << "\r" << charName << ": Seeking shelter.." << flush;
            sleep(1);
            cout << "\r" << charName << ": Seeking shelter..." << flush;
            sleep(1);
            cout << "\r" << charName << ": Seeking shelter...." << flush;
            sleep(1);
            cout << "\r" << charName << ": Seeking shelter....." << flush;
            sleep(1);
            cout << "\r" << charName << ": " << charName << " finds a sturdy rock formation to wait out the weather.\n\n";
            cout << "System: Did " << charName << " collect twigs for firewood? (Y/N): ";
            cin >> resp;
            cin.ignore();
            for (auto &c : resp) {
                c = toupper(c);
            }
            if (resp == "Y") {
                cout << "\n\nAzur: Collecting those twigs early on the hike was a great idea, the bunch you collected would be enough "
                "to keep you warm for a while.\n\n";
                sleep(2);
                cout << charName << ": *Proceeds to light a fire using the twigs as firewood to keep warm until the weather clears up*\n\n";
                sleep(2);
                cout << "Azur: Wise choice! Patience is a virtue in the face of unpredictable weather.\n\n";
                sleep(2);
                cout << charName << ": After the weather clears, " << charName << " resumes the hike, now more cautious and ready for the "
                "challenges that lie ahead. The path becomes steeper, and the air thinner as the ascent to the summit of Mount Pulag becomes more demanding.\n\n";
                sleep(2);
                cout << "Azur: The summit is within reach, adventurer. Brace yourself for the final push!\n\n";
                sleep(2);
                cout << charName << ": I'm ready, Azur. The challenges have made this journey unforgettable, and I'm determined to conquer Mount Pulag.\n\n";
                sleep(2);

                 // CHALLENGE
                system("CLS");
                cout << "*** Challenge ***\n"
                        << charName << ": As I approach the top of Mount Pulag, a sudden gust of wind carries a challenge to my ears. "
                        "The mountain whispers a riddle:\n\n";
                        sleep(2);
                cout << "Riddle: \"I'm not alive, but I grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. "
                        "What am I?\"\n"
                        "Enter answer: ";
                    getline(cin, resp); // Read the entire line, allowing for spaces and multiple words
                    for (auto &c : resp) {
                        c = toupper(c);
                    }
                if (resp == "FIRE") {
                    cout << charName << ": I press on, driven by the desire to conquer this peak and savor the victory of overcoming every "
                    "challenge. As I reach the summit, a sense of accomplishment washes over me.\n\n";
                    sleep(2);
                    cout << "Azur: Congratulations! You've not only conquered the physical challenges but also displayed resilience, "
                    "kindness, and wisdom throughout your journey.\n\n";
                    sleep(2);
                    cout << charName << ": Thank you, Azur. This adventure has been an incredible experience, filled with lessons and "
                    "memorable encounters. I couldn't have done it without the guidance and support along the way.\n\n";
                    sleep(2);
                    cout << charName << ": As the sun begins to set, casting a warm glow over the mountain peaks, I take a moment to reflect "
                    "on the incredible journey. Mount Pulag has tested my physical and mental strength, but it has also revealed the beauty "
                    "of nature and the resilience within.\n\n";
                    sleep(2);
                    cout << "Azur: The adventure may be over, but the memories will linger. Remember the lessons learned and carry the spirit "
                    "of the mountains with you.\n\n";
                    sleep(2);
                    cout << charName << ": Thank you, Azur, for being a guide through this remarkable journey. Mount Pulag has left an indelible "
                    "mark on my soul, and I leave with a heart full of gratitude and a newfound appreciation for the wonders of the natural world.\n\n";
                    sleep(2);
                    cout << "Azur: Your display of resilience and adaptability is commendable. Congratulations, adventurer! You have triumphantly "
                    "conquered Mount Pulag, creating an indelible mark on your journey.\n\n";
                    sleep(2);
                }
            }
             else {
                cout << "Azur: It's too cold out here for you to stay.\n\n";
                cout << charName << ": Well, There's no turning back now, I've made it this far.\n\n";
                cout << "*after the weather clears up*\n\n";
                cout << charName << ": I don't feel so well…\n\n";
                cout << "Azur: It must've been because of the cold earlier, I advise that you go back down the mountain for now and come "
                "back another time. It's too dangerous for you.\n\n";
                cout << charName << ": ...\n\n";
                cout << charName << " *follows azur's suggestion and heads back down the mountain*\n\n";
                cout << "*** GAME OVER ***";
            }
        }
        break;
        case 2: {
            cout << "Azur: I don't think this is a great idea (selected char), it seems dangerous.\n\n";
            cout << charName << ": There's no other option, waiting will only prolong my hike to the top.\n\n";
            cout << "Azur: ...";
            cout << "*" << charName << "was caught in a landslide while trying to continue hiking despite the weather condition*\n\n";
            cout << "*** GAME OVER ***";
        }
        break;
        default: {
            cout << "Invalid Number!";
        }
    }
}
void getTransportationName(int choice, string& transportationName) {
    switch (choice) {
        case 1:
            transportationName = "Helicopter";
            break;
        case 2:
            transportationName = "Boat";
            break;
        case 3:
            transportationName = "Seaplane";
            break;
        default:
            transportationName = "Unknown";
    }
}
void AC1() {
    cout << "Greetings adventurer, now that you've opted for Anawangin Cove, please choose the mode of transportation you'd like to take on "
            "your journey to this destination.\n\n";
        sleep(2);
    cout << "Cloudwarden Frostpeak: Hello and thank you for the warm welcome! I am excited to embark on the adventure to Anawangin Cove.\n\n";
        sleep(2);
    cout << "Azur: However, before you make your transportation selection, you must complete the assigned task.\n\n";
        sleep(2);
    cout << "Cloudwarden Frostpeak: Certainly!\n";
        sleep(2);

    // TASK
    string answer;
    int tries = 0;

    do {
        cout << "\nRiddle: I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I? \n";
        cout << "Enter answer: ";
        cin >> answer;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear input buffer
        for (auto &c : answer) {
            c = toupper(c);
        }

        if (answer == "ECHO") {
            cout << "\n\nAzur: Well done! You may choose the transportation method of your preference.\n\n";
            cout << "Options:\n"
                    "1. Helicopter\n"
                    "2. Boat\n"
                    "3. Seaplane\n"
                    "Your choice: ";
            int transportChoice;
            cin >> transportChoice;

            string chosenTransportation;
            getTransportationName(transportChoice, chosenTransportation);
            cout << "Cloudwarden Frostpeak: I would like to choose " << chosenTransportation << " for my journey to this beautiful destination.\n\n";
            sleep(2);
            cout << "Azur: You are now free to proceed with your journey to Anawangin Cove. Best of luck on your adventure!\n\n";
            sleep(2);
            cout << "Azur (SCENE): The adventurer's journey commences. Upon arriving at Anawangin Cove, they are greeted by breathtaking scenery.\n\n";
            sleep(2);
            cout << charName << ": Whoa... The beauty of this island exceeded my expectations. I'm eagerly looking forward to reaching the summit.\n\n";
            sleep(2);
            cout << "Azur (SCENE): As the adventurer continues their exploration of Anawangin Cove, they come across a narrow and winding trail "
            "leading towards the island's heart.\n\n";
            sleep(2);
            cout << charName << ": This trail looks challenging, but I'm ready for it.\n\n";
            sleep(2);
            cout << "Azur: Navigating this trail is the next challenge. The path is filled with twists and turns. Choose your steps wisely.\n\n";
            sleep(2);
            cout << charName << ": I accept the challenge! I'll navigate the trail with caution.\n\n";
            
            // CHALLENGE
            int ans;
            cout << "*** Challenge ***\n"
                    "Azur: As you progress along the narrow and winding trail, you notice a series of small, hidden caves on either side. Your "
                    "challenge is to explore one of these caves, uncovering its secret and potentially finding a hidden artifact or messages "
                    "from previous adventurers. Be mindful of the darkness within and use your instincts to decide which cave to enter. Choose "
                    "the cave wisely, and may the discoveries within add another layer to your Siargao adventure.\n"
                    "Option:\n"
                    "Cave 1: Bats (LOUD NOICE OF BATS ECHOING~)\n"
                    "Cave 2: Filled with stalagmites and stalactites, A bag containing camping gear, probably left behind by a previous "
                    "adventurer, awaits discovery along the trail.\n"
                    << charName << ": Enter answer: ";
                    cin >> ans;
            switch(ans) {
                case 1: {
                    cout << "Wrong answer!\n"
                            "*** GAME OVER ***";
                }
                break;
                case 2: {
                    cout << "[The adventurer successfully navigates the challenging trail, arriving at a clearing with a stunning view.]\n\n";
                    sleep(2);
                    cout << "Azur: Congratulations on overcoming the trail! However, another challenge awaits you.\n\n";
                    sleep(2);
                    cout << charName << ": What's the next challenge?\n\n";
                    sleep(2);
                    cout << "Azur: Anawangin Cove has limited facilities, and you must set up your own campsite. Build a shelter and prepare for the night.\n\n";
                    sleep(2);
                    cout << charName << ": Building a shelter? That sounds interesting. I'm up for it!\n\n";
                    cout << charName << ": Building shelter." << flush;
                    sleep(1);
                    cout << "\r" << charName << ": Building shelter.." << flush;
                    sleep(1);
                    cout << "\r" << charName << ": Building shelter..." << flush;
                    sleep(1);
                    cout << "\r" << "[The adventurer successfully builds a makeshift shelter, using the resources available in the cove.]\n\n";
                    cout << "Azur: Azur: You've demonstrated resilience and adaptability. Congratulations, adventurer! You have successfully conquered Anawangin Cove. Your journey here is truly an unforgettable adventure.\n\n";
                    cout << charName << "Thank you, Azur! This journey has been remarkable, and I'm grateful for the challenges that made it even more memorable.";
                }
            }

            
            // Exit the loop once the correct answer and transportation choice are given
            break;
        } else {
            cout << "Azur: That was not the answer.";
            tries++;
            if (tries < 5) {
                cout << " You have " << 5 - tries << " tries left.";
            }
        }
    } while (tries < 5);
}
void SI1() {
    int ans;
    system("CLS");
    cout << "(Climate change, Muddy Trails during Rainy Season, Limited Elevation and Variety)\n\n";
            sleep(2);
    cout << "Welcome to the enchanting shores of Siargao Island, where the waves whisper tales of adventure and the lush landscapes beckon the intrepid souls. "
    "To our fellow hikers and campers, may the trails be your guide, the stars your canopy, and the ocean breeze your companion. May your journey be filled with "
    "discovery and the warmth of newfound friendships. Embrace the wild beauty of Siargao, let the island spirit ignite your sense of wonder, and may each step bring "
    "you closer to nature's embrace.\n\n";
            sleep(2);
    cout << "Azur: Embark on the trail, and at the 250m mark, your first challenge awaits you. Follow the path to face the initial obstacle in your adventure. The "
    "journey unfolds with each step, introducing trials that test your resilience and determination.\n\n";
            sleep(2);
    cout << charName << ": I understand now Azur.Thank you for providing me with this information. I am prepared to successfully overcome that challenge.\n\n";
            sleep(2);
    cout << "The adventurer follows the instruction and as they reach the 250m mark, the trail opens up to a clearing adorned with vibrant flora and the distant "
    "melody of cascading water. Before them lies the first challenge.\n\n";
            sleep(2);

    // CHALLENGE
    cout << "*** CHALLENGE: MUDDY TRAILS ***\n"
            "(During the rainy season, Siargao Island transforms into a lush paradise, but it also presents a unique challenge - muddy trails. The recent downpour has "
            "turned parts of the path into slippery, mucky terrain. Your task is to navigate through this muddy obstacle with finesse and determination.)\n\n";
            sleep(2);
    cout << "Your options are as follows:\n";
            "1. *Forge Ahead*: Embrace the mud, navigate carefully through the slippery terrain, and press forward. This option may test your balance and agility, but it leads "
            "directly to the next stage of your adventure.\n\n"
            "\tAnswer: This option leads directly to the next stage of your adventure, testing your balance and agility.\n\n"
            "2. *Seek an Alternative Route*: Scout the surroundings for a less muddy path. Keep in mind that deviating from the main trail might introduce new challenges or take "
            "longer to reach your destination.\n\n"
            "\tAnswer: Deviating from the main trail might introduce new challenges or take longer to reach your destination.\n\n"
            "3. *Team Up*: If you spot fellow adventurers struggling with the mud, consider joining forces. Teamwork might provide the strength and support needed to overcome this muddy hurdle together.\n\n"
            "\tAnswer: Teamwork might provide the strength and support needed to overcome this muddy hurdle together.\n\n";
            sleep(2);
    cout << "What path will you take, intrepid explorer? The muddy trails await your decision, and the island's spirit watches as you embark on this journey of discovery.\n\n";
    cout << "Enter answer: ";
    cin >> ans;

    string resultMessage;
    if (ans == 1) {
        resultMessage = charName + ": I choose to embrace the mud and navigate carefully through the slippery terrain. With determination, I step into the muck, ensuring each movement is "
        "calculated to maintain balance. This option requires a steady focus and agility as I press forward, anticipating the next stage of my adventure.";
    } else if (ans == 2) {
        resultMessage = charName + ": I choose to scout the surroundings for a less muddy path. I carefully examine the terrain, searching for a route that might present fewer challenges. "
        "Deviating from the main trail could introduce new obstacles or prolong the journey, but I prioritize the potential ease of travel.";
    } else if (ans == 3) {
        resultMessage = charName + ": I choose to consider joining forces. Recognizing the strength in unity, I approach them, proposing a collaborative effort to overcome the muddy hurdle "
        "together. Teamwork becomes a valuable resource, offering shared support and camaraderie on this challenging stretch of the trail.";
    } else {
        cout << "Invalid answer.";
        exit(1);
    }

    system("CLS");
    cout << "Azur: Well done, adventurer! You've successfully conquered the muddy trails, proving your resilience and determination. With this challenge behind you, you may now proceed along "
    "the trail. Best of luck on the next leg of your journey!\n\n";
    sleep(2);
    cout << charName << ": Phew, that was a close call. I didn't anticipate that my decision would be spot-on for the challenge. Now, I can fully savor this breathtaking view. Excitement builds "
    "as I look forward to the upcoming thrilling challenges.\n\n";
    sleep(2);
    cout << "*With a sigh of relief, you navigate the muddy trails with finesse, successfully overcoming the challenge. As you emerge onto a drier section of the trail, the landscape opens up to "
    "reveal a breathtaking view of Siargao Island's beauty. The vibrant flora, the distant sound of cascading water, and the refreshing island breeze create a sensory symphony that envelops you.*\n\n";
    sleep(2);
    cout << "Azur: Well done, courageous adventurer! Your choice proved to be perfect for the challenge, allowing you to enjoy this stunning view. Take a moment to bask in the natural beauty surrounding "
    "you, for your journey on Siargao Island is far from over.\n\n";
    sleep(2);
    cout << charName << ": I express my gratitude, Azur, for leading me through the challenges.\n\n";
}
void SI2() {
    char ans;
    cout << "“The onset of darkness approaches.”\n\n";
    sleep(2);
    cout << charName << ": Uh-oh, night is falling. Time to pitch my tent for the evening.\n\n";
    sleep(2);
    cout << "“The player has successfully set up their tent and lit it for the night.”\n\n";
    sleep(2);
    cout << "“While " << charName << " was sleeping, a couple, thrilled to watch the sunrise, noticed the tent where" << charName << " was resting.”\n\n";
    sleep(2);
    cout << "Athena: Oh, I believe there's someone inside.\n\n";
    sleep(2);
    cout << "Zeke: Shall we wake them up? (Y/N): \n\n";
    cin >> ans;
    sleep(2);
    if (toupper(ans) == 'Y') {
        cout << "Athena & Zeke: Wakey-wakey~ rise and shine, and greet the shining sunrise; it's on the way!\n\n";
    sleep(2);
        cout << "Zeke: Good morning dear, sorry to interrupt your sleep but we just wanted to ask if you wanna watch sunrise with us.\n\n";
    sleep(2);
        cout << "“ "<<  charName << " awakens from a deep slumber and unzips the tent, joining the others outside to greet the morning.”\n\n";
    sleep(2);
        cout << charName << ": Good morning! Oh, it's already morning. Thanks for waking me up. I wanted to watch the sunrise too, but I was so sleepy that I didn't realize "
        "it was morning already. By the way, I'm " << charName << endl;
    sleep(2);
        cout << "Athena: Hello, dear. Nice to meet you. Sorry for the late introduction. I'm Athena, and beside me is my husband, Zeke. We are on our honeymoon trip right now.\n\n";
    sleep(2);
        cout << "“The sunrise arrived, and they enjoyed it until the couple had to depart, leaving " << charName << " alone because they needed to return to the foot of the mountain before noon for their next flight.”";
    sleep(2);
        cout << charName << ": It was a pleasure meeting you, Athena and Zeke. Congratulations on your honeymoon! I hope you have a fantastic journey ahead. Safe travels down the mountain, and thank you for sharing this beautiful sunrise with me.\n\n";
    sleep(2);
        cout << "As the couple departs, " << charName << " is left alone to contemplate the serene morning scene. The sky is painted in hues of orange and pink as the sun continues its ascent.\n\n";
    sleep(2);
        cout << charName << ": What a magical way to start the day. I'm glad I got to share this sunrise with Athena and Zeke. Now, let's pack up and continue my own adventure.\n\n";
    sleep(2);
        cout << "(" << charName << "proceeds to pack up their tent and belongings. The mountain landscape is breathtaking, with towering peaks and lush greenery.)\n\n";
    sleep(2);
        cout << charName << ": (thinking to themselves) I wonder what awaits me on this journey. The world is full of wonders, and each day brings new surprises. Maybe I'll encounter more friendly faces along the way.\n\n";
    sleep(2);
        cout << "(As you continue along the trail, the path leads you to a serene lagoon nestled amidst lush greenery. Crystal-clear waters invite you for a refreshing swim, but the tranquility is interrupted by the next challenge.)\n\n";
    sleep(2);

    // CHALLENGE
    int choice;

    cout << "*** CHALLENGE ***\n";
    cout << "Azur: Behold the Lagoon Leap Challenge! To proceed, you must navigate a series of stepping stones across the lagoon. Each stone requires precision and balance. Choose your path wisely, for a misstep may plunge you into the cool waters below.\n\n";
    cout << "Your options are as follows:\n"
            "As the adventurer contemplates the Lagoon Leap Challenge, the options unfold before them.\n\n";
            "1. *Steady Stride*: In this approach, the adventurer decides to adopt a focused and measured strategy. With unwavering concentration, they navigate the lagoon by "
            "carefully placing each foot on the stones, ensuring a stable progression from one to the next. This method prioritizes balance and precision, offering a more cautious "
            "but calculated advancement.\n\n"
            "2. *Leap of Faith*: Opting for a more daring strategy, the adventurer decides to channel their adventurous spirit. They take a bold leap from one stone to the next, "
            "embracing the challenge with a courageous attitude. This approach is marked by a willingness to take risks, relying on agility and confidence to navigate the lagoon "
            "in a more dynamic and unconventional manner.\n\n" 
            "3. *Observe and Plan*: Choosing a strategic and thoughtful path, the adventurer takes a moment to observe the pattern of the stepping stones. By carefully planning "
            "their route, they aim to navigate the lagoon with precision and forethought. This approach prioritizes analysis and strategy, allowing the adventurer to make well-informed "
            "decisions based on the observed pattern before taking each step.\n\n";
    cout << "With their decision made, the adventurer prepares to face the Lagoon Leap Challenge, knowing that the outcome depends on the approach they have chosen. The anticipation builds as they step forward to conquer this next exciting obstacle on their journey through Siargao Island.\n\n";
    cout << "Enter answer: ";
    cin >> choice;
    string resultMessage;
    if (choice == 1) {
        resultMessage = charName + ": I decide to adopt a focused and measured strategy. With unwavering concentration, I navigate the lagoon by carefully placing each foot "
        "on the stones, ensuring a stable progression from one to the next. This method prioritizes balance and precision, offering a more cautious but calculated advancement.\n\n";
    } else if (choice == 2) {
        resultMessage = charName + ": Opting for a more daring strategy, I decide to channel my adventurous spirit. I take a bold leap from one stone to the next, embracing "
        "the challenge with a courageous attitude. This approach is marked by my willingness to take risks, relying on agility and confidence to navigate the lagoon in a more "
        "dynamic and unconventional manner.\n\n";
    } else if (choice == 3) {
        resultMessage = charName + ": Choosing a strategic and thoughtful path, I take a moment to observe the pattern of the stepping stones. By carefully planning my route, "
        "I aim to navigate the lagoon with precision and forethought. This approach prioritizes analysis and strategy, allowing me to make well-informed decisions based on the "
        "observed pattern before taking each step.\n\n";
    }
    sleep(2);
    cout << charName << ": I must carefully consider my options to successfully navigate this challenge.\n\n";
    sleep(2);
    cout << charName << ": In contemplating the Lagoon Leap Challenge, I weigh my options carefully.\n\n";
    sleep(2);
    cout << resultMessage;
    sleep(2);
    cout << charName << ": With my decision made, I prepare to face the Lagoon Leap Challenge, knowing that the outcome depends on the approach I have chosen. The anticipation "
    "builds as I step forward to conquer this next exciting obstacle on my journey through Siargao Island\n\n";
    sleep(2);
    cout << charName << ": Fortunately, I was able to navigate through the challenge successfully by thinking wisely and approaching it with careful consideration.\n\n";
    sleep(2);
    cout << "Azur: Congratulations on overcoming the challenge! Best of luck as you face the next one, player.\n\n";
    sleep(2);
    system("CLS");
    cout << "Upon reaching the summit of the island, the adventurer was mesmerized by its breathtaking beauty. The panoramic view stretched far and wide, showcasing a tapestry of "
    "lush landscapes and azure waters. Overwhelmed with excitement, he couldn't wait to share the incredible adventure he had experienced to the world. The journey to the top had "
    "been filled with challenges, but the reward of this awe-inspiring sight made it all worthwhile. With a heart full of gratitude, he prepared to document and share his "
    "unforgettable experience with the world.\n\n";
    sleep(2);
    cout << "Little did he know, after reaching the summit, there comes the final challenge that awaits.\n\n";
    }
}
int main() {
    int selectedChar, selectedMap;
    string charName, mapName;
    login();

    if (loggedIn) {
        system("CLS");
        cout << "Loading...";
        sleep(1);
        system("CLS");
        cout << "Loading..";
        sleep(1);
        system("CLS");
        cout << "Loading.";
        sleep(1);
        system("CLS");
        cout << "Connecting to server..";
        sleep(1);
        system("CLS");
        cout << "Connecting to server...";
        sleep(1);
        system("CLS");
        printBox("Login Successful!", 60);



        selectedChar = charselect();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the newline character

        system("cls");
        printBox("Welcome to Sustainable Horizons: A SCEC Camping Odyssey!", 60);

        switch (selectedChar) {
            case 1:
                charName = "Cloudwarden Frostpeak";
                cout << "You chose " << charName << ".\n\n";
                break;
            case 2:
                charName = "Aurora Shorewhisper";
                cout << "You chose " << charName << ".\n\n";
                break;
            case 3:
                charName = "Coco Zenwave";
                cout << "You chose " << charName << ".\n\n";
                break;
        }

        Map();
        cout << "Enter your choice: ";
        cin >> selectedMap;
        cout << "\n\n";
        switch (selectedMap) {
                case 1:
                    mapName = "Mount Pulag";
                    cout << "You chose " << mapName << ".\n\n";
                    break;
                case 2:
                    mapName = "Anawangin Cove";
                    cout << "You chose " << mapName << ".\n\n";
                    break;
                case 3:
                    mapName = "Siargao Island";
                    cout << "You chose " << mapName << ".\n\n";
                    break;
            }
            
        system("cls");
        printBox("Welcome to " + mapName + "!", 60);
        cout << "SYSTEM NOTICE: "
             << "You chose " << charName << " to venture " << mapName << "\n\n";
        system("pause");
        system("cls");
        cout << "LOADING WORLD...";
        sleep(1);
        system("cls");
        cout << "LOADING WORLD>..";
        sleep(1);
        system("cls");
        cout << "LOADING WORLD>>.";
        sleep(1);
        system("cls");
        cout << "LOADING WORLD>>>";
        sleep(1);
        system("cls");

        cout << "While " << charName << " is on the way to the foot of the mountain where the hike starts, a person is welcoming"
        " the hikers and giving information about the place, its rules and regulations, and the place where hikers should avoid hiking.\n\n";
        
        if (mapName == "Mount Pulag") {
            sleep(2);
            cout << "Azur: Hi I'm Azur, your guide for today's adventure. Welcome to " << mapName << ". As you embark on the trail, Obey the "
            "\"Follow Leave No Trace Principles\", Respect nature by refraining from disturbing the forest and wildlife.\n\n";
            sleep(2);
            cout << "Azur: Stay on designated trails to minimize environmental impact, Observe quiet hours for a serene experience, And "
            "respect other  campers by maintaining a considerate and peaceful atmosphere.\n\n";
            sleep(2);
            cout << "Azur: As for places you should keep away, here are the following: Steep Cliffs and Unstable Terrain, Areas Prone to "
            "Rockslides or Landslides, Caves and Unstable Rock Formations, Areas with Poor Visibility, Closed or Restricted Areas, Habitats"
            " of Dangerous Wildlife and lastly Areas with High Fire Risk.\n\n";
            sleep(2);
            cout << "Azur: Since there are rules, obviously consequences are to follow. Failure to abide by the rules shall have its fair and "
            "just punishments. It could range from fines up to years of jail time depending on the severity of your offence.\n\n";

            char resp;
            cout << charName << ": Would you like to continue with the hike? (Y/N): ";
            cin >> resp;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (toupper(resp) == 'Y') {
                system("CLS");
                cout << "Azur: You found some twigs, do you want to pick them up? (Y/N): ";
                cin >> resp;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (toupper(resp) == 'Y') {
                    cout << "\n\n";
                    MP1();
                    MP2();
                    MP3();
                    FCM(mapName);

                    cout << "Azur: Adventurer, your resilience and adaptability have been truly impressive. Congratulations on successfully conquering Siargao Island! Your journey here is an unforgettable adventure.\n";
                }
                else {
                cout << charName << ": I guess I'll try to find some later, it'll for sure tire me quickly if I bring twigs this early on my hike.\n";
                cout << charName << ": I'll enjoy the scenery for now and keep on hiking.";
            }
        }
    } else if (mapName == "Anawangin Cove") {
        AC1();
        FCM(mapName);

        cout << "Azur: Adventurer, your resilience and adaptability have been truly impressive. Congratulations on successfully conquering Siargao Island! Your journey here is an unforgettable adventure.\n";
    } else if (mapName == "Siargao Island") {
        SI1();
        SI2();
        FCM(mapName);

        cout << "Azur: Adventurer, your resilience and adaptability have been truly impressive. Congratulations on successfully conquering Siargao Island! Your journey here is an unforgettable adventure.\n";
    }

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
    }
}