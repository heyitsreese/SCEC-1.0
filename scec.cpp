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
            cout << "You have chosen Waste Management";
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

                    // END 50%

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
                    // MP1();
                    // MP2();
                    // MP3();
                    FCM(mapName);
                }
                else {
                cout << charName << ": I guess I'll try to find some later, it'll for sure tire me quickly if I bring twigs this early on my hike.\n";
                cout << charName << ": I'll enjoy the scenery for now and keep on hiking.";
            }
        }
    } else if (mapName == "Anawangin Cove") {
        AC1();
    }

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
    }
}